//UVA10100
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
const int maxn=1100;
struct text
{
    int num;
    string word[maxn];
}t1,t2;
string s1,s2;
int dp[maxn][maxn];

void devide(string s ,text &t)
{
    int len=s.size();
    t.num=1;
    for(int i=0;i<maxn;i++) t.word[i].clear();
    for(int i=0;i<len;i++)
    {
        if(isalpha(s[i])||isdigit(s[i]))
            t.word[t.num]+=s[i];
        else
            ++t.num;
    }
    int now=0;
    for(int i=1;i<=t.num;i++)
    {
        if(!t.word[i].empty())
            t.word[++now]=t.word[i];
    }
    t.num=now;
}
int main()
{
    int kas=0;  //测试编号初始化
    while(!cin.eof())
    {
        kas++;
        getline(cin,s1);
        devide(s1,t1);  //从s1中截取长度为t.num的单词序列t1.word[]
        getline(cin,s2);
        devide(s2,t2);
        printf("%2d. ",kas);
        if(s1.empty()||s2.empty())  //输入中存在空行
        {
            printf("Blank!\n");
            continue;
        }
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=t1.num;i++)
        {
            for(int j=1;j<=t2.num;j++)
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);    //计算s1中前i个单词和s2中前j个单词最多的单词数
                if(t1.word[i]==t2.word[j])
					dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
            }
        }
        printf("Length of longest match: %d\n",dp[t1.num][t2.num]);
    }
    return 0;
}
