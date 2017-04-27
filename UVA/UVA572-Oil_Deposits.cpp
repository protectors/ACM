//DFS
#include <iostream>
#include <cstring>
using namespace std;
const  int maxn=100+10;
char pic[maxn][maxn];
int m,n,vis[maxn][maxn];

void dfs(int x,int y,int id)
{
    if(x<0||x>=m ||y<0||y>n) return;  //格子出界
    if(vis[x][y]||pic[x][y]!='@') return;   //判断是否访问过或者发现不是油田
    vis[x][y]=id;   //连通分量编号
    for(int dx=-1;dx<=1;dx++)
    {
        for(int dy=-1;dy<=1;dy++)
        {
            if(dx!=0||dy!=0)    //判断不是原位置的点其他方位点
                dfs(x+dx,y+dy,id);
        }
    }
}
int main()
{
    while(cin>>m>>n&&m&&n)
    {
        for(int i=0;i<m;i++)
            cin>>pic[i];
        memset(vis,0,sizeof(vis));
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0&&pic[i][j]=='@') dfs(i,j,++ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
//BFS
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const  int maxn=100+10;
char pic[maxn][maxn];
int m,n,ans,vis[maxn][maxn];
int dir[8][2]={{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};

void bfs(int x,int y)
{
   ans++;
   queue<int> q;
   q.push(x);
   q.push(y);
   while(!q.empty())
   {
       int x=q.front();
       q.pop();
       int y=q.front();
       q.pop();
       vis[x][y]=ans;
       for(int i=0;i<8;i++)
       {
           int dx=x+dir[i][0];
           int dy=y+dir[i][1];
           if(vis[dx][dy]==0&&pic[dx][dy]=='@'&&dx>=0&&dx<=m&&dy>=0&&dy<=n)
           {
               vis[dx][dy]=ans;
               q.push(dx);
               q.push(dy);
           }
       }

   }
}

int main()
{
    while(cin>>m>>n&&m&&n)
    {
        for(int i=0;i<m;i++)
            cin>>pic[i];
        memset(vis,0,sizeof(vis));
        ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0&&pic[i][j]=='@') bfs(i,j);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/