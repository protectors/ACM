//UVA490
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char a[110][110];
    int str,line=0,i,j,maxn=0;
    memset(a,' ',sizeof(a));
    while(gets(a[line]))
    {
        str=strlen(a[line]);
        if(maxn<=str)
            maxn=str;
        line++;
    }
    for(i=0;i<maxn;i++)
    {
        for(j=line-1;j>=0;j--)
        {
            if(a[j][i]==0)
                printf(" ");
            else
                printf("%c",a[j][i]);

        }
        printf("\n");
    }
    return 0;
}
