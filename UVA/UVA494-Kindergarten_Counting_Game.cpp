//UVA494
#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char s[1005];
    while(gets(s))
    {
        int ans=0;
        for(int i=0;i<strlen(s);i++)
            if(isalpha(s[i])&&!isalpha(s[i+1]))
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}
//sstream挑选出单词后无法确定单词中的abc！以及b2等字母中存在其他字符的语句
