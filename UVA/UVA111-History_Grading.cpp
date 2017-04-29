//UVA111
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N=50;
int tmp[N];
int st[N];
int f[N][N];
int ed[N];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>tmp[i];
        st[tmp[i]]=i;
    }
    while(!cin.eof())
    {
        for(int i=1;i<=n;i++)
        {
            cin>>tmp[i];
            ed[tmp[i]]=i;
        }
        if(cin.eof()) break;
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                f[i][j]=max(f[i-1][j],f[i][j-1]);
                if(st[i]==ed[j])
                    f[i][j]=max(f[i][j],f[i-1][j-1]+1);
            }
        }
        cout<<f[n][n]<<endl;
    }
    return 0;
}
