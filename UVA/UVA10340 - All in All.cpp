//UVA10340
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
const int N = 1e5+5;
using namespace std;
char s[N],t[N];
int main()
{
    int i,j;
    while(scanf("%s%s",&s,&t)!=EOF)
    {
        int tlen=strlen(t);
        int st=0,flag=0;
        int slen=strlen(s);
        for(i=0;i<tlen;i++)
        {
            if(s[st]==t[i])
            {
                st++;
            }
            if(st==slen)
                flag=1;
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
