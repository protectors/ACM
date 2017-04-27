//POJ1141
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=110;
char str[maxn];
int dp[maxn][maxn];
int path[maxn][maxn];   //存储path[i][j]的最佳中间位置
void strprint(int i,int j) //输出括号方案
{
    if(i>j) return;     //无效位置返回
    if(i==j)            //若只含一个字符，则对单括号输出匹配的括号对
    {
        if(str[i]=='['||str[i]==']')
            printf("[]");
        else
            printf("()");
    }
    else if(path[i][j]==-1) //若i，j匹配，则输出左括号，递归中间子序列，输出右括号
    {
        printf("%c",str[i]);
        strprint(i+1,j-1);
        printf("%c",str[j]);
    }
    else
    {
        strprint(i,path[i][j]);
        strprint(path[i][j]+1,j);
    }
}
int main()
{
    while(gets(str))
    {
        int len=strlen(str);
        if(len==0)
        {
            printf("\n");
            continue;
        }
        memset(dp,0,sizeof(dp));
        for(int i=0;i<len;i++)  //判断单括号的数组
            dp[i][i]=1;
        for(int r=1;r<len;r++)  //阶段：递推子序列的长度
        {
            for(int i=0;i<len-r;i++)    //状态：枚举子序列的开始位置
            {
                int j=i+r;              //计算子序列的结束位置
                dp[i][j]=0x7fffffff;     //状态转移方程初始化为最大（32个1）
                if((str[i]=='('&&str[j]==')')||(str[i]=='['&&str[j]==']'))
                {
                    dp[i][j]=dp[i+1][j-1];
                    path[i][j]=-1;      //-1表示（i，j）括号匹配成功
                    //continue;         //WA了好多次，原因出在这里
                }
                for(int k=i;k<j;k++)    //枚举中间指针
                {
                    if(dp[i][j]>dp[i][k]+dp[k+1][j])
                    {
                        dp[i][j]=dp[i][k]+dp[k+1][j];
                        path[i][j]=k;
                    }
                }
            }
        }
        strprint(0,len-1);
        printf("\n");
    }
    return 0;
}

