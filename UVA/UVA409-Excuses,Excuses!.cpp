//UVA409
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;
const int N =100;
char word[N][N];
int n,m;
int main()
{
    char s[N][N],str[N][N],g[N];;
    int ans[N];
    int i,j,maxn,kase=1;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(ans,0,sizeof(ans));
        getchar();
        maxn=0;
        for(i=0;i<n;i++)
        {
            gets(word[i]);
            for(j=0;j<strlen(word[i]);j++)
            {
                if(isalpha(word[i][j]))
                    word[i][j]=tolower(word[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            gets(s[i]);
            strcpy(str[i],s[i]);
            for(j=0;j<strlen(str[i]);j++)
            {
                if(isalpha(str[i][j]))
                    str[i][j]=tolower(str[i][j]);
            }
            int len=strlen(str[i]);
            int line=0;
            for(j=0;j<len;j++)
            {
                if(isalpha(str[i][j]))
                    g[line++]=str[i][j];
                else
                {
                    g[line]='\0';
                    line=0;
                    for(int k=0;k<n;k++)
                    {
                        if(strcmp(g,word[k])==0)
                         {
                             ans[i]++;
                             break;
                         }
                    }
                }
            }
        }
        printf("Excuse Set #%d\n",kase++);
        for(i=0;i<m;i++)
        {
            //cout<<ans[i]<<endl;
            if(ans[i]>=maxn)
                maxn=ans[i];
        }
        for(i=0;i<m;i++)
        {
            if(ans[i]==maxn)
                printf("%s\n",s[i]);
        }
        printf("\n");
    }
    return 0;
}
