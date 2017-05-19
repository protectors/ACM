//UVA10010
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;
char s[100][100];
char f[30];
int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},
                {1,1},{1,0},{1,-1},{0,-1}};
int x,y,n,m;
void dfs(int a,int b,char f[])
{
    char g[30];
    int i,j,k;
    int len=strlen(f);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]!=f[0])
                continue;
            for(k=0;k<8;k++)
            {
                g[0]=s[i][j];
                int dx=i+dir[k][0];
                int dy=j+dir[k][1];
                int t=1;
                while(dx>=0&&dx<n&&dy>=0&&dy<m)
                {
                    g[t++]=s[dx][dy];
                    if(t==len)
                        break;
                    dx+=dir[k][0];
                    dy+=dir[k][1];
                }
                g[t]='\0';
                if(strcmp(g,f)==0)
                {
                    x=i+1;
                    y=j+1;
                    return;
                }
            }
        }
    }
}
int main()
{
    int t,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            scanf("%s",s[i]);
            for(j=0;j<m;j++)
                s[i][j]=tolower(s[i][j]);
        }
        cin>>k;
        for(i=0;i<k;i++)
        {
            scanf("%s",f);
            for(j=0;f[j]!='\0';j++)
                f[j]=tolower(f[j]);
            x=y=0;
            dfs(x,y,f);
            cout<<x<<" "<<y<<endl;
        }
        if(t)
            cout<<endl;

    }
    return 0;
}

/****************************他人详解************/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int dir[8][2]={{1,0},{-1,0},{0,-1},{0,1},{1,1},{1,-1},{-1,1},{-1,-1}};
int search(char s[],int x,int y);

char a[100][100],s[50][100];


int main()

{
    freopen("cin.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t,m,n,k,str;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            scanf("%s",a[i]);
            for(int j=0;j<n;j++)
            {
                a[i][j]=toupper(a[i][j]);
            }
        }
        cin>>k;
        for(int i=0;i<k;i++)
        {
            scanf("%s",s[i]);
            str=strlen(s[i]);
            for(int j=0;j<str;j++)
            {
                s[i][j]=toupper(s[i][j]);
            }
        }
        for(int i=0;i<k;i++)
        {
            int flag=0;
            for(int x=0;x<m&&!flag;x++)
                for(int y=0;y<n&&!flag;y++)
                    if(search(s[i],x,y))
                    {
                        flag=1;
                        printf("%d %d\n",x+1,y+1);
                    }

        }
        if(t) cout<<endl;
    }

    return 0;
}

//深搜

int search(char s[],int x,int y)
{
    int len=strlen(s);
    if(s[0]!=a[x][y]) return 0;
    for(int i=0;i<8;i++)
    {
        int dx=x;
        int dy=y;
        int flag=1;
        for(int j=1;j<len;j++)
        {
            dx+=dir[i][0];
            dy+=dir[i][1];
            if(a[dx][dy]!=s[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            return 1;
    }
    return 0;

}

