#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int INF=1e8;
typedef pair<int, int> P;
int m,n;
char mp[50][50],vis[50][50];
int sx,sy;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int bfs(){
    queue<P> q;
    memset(vis,0,sizeof(vis));

    q.push(P(sx,sy));
    vis[sx][sy]=1;
    int res=1;

    while(!q.empty()){
        P tmp=q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int nx=tmp.first+dx[i];
            int ny=tmp.second+dy[i];
            if(nx>0&&nx<=m&&ny>0&&ny<=n&&mp[nx][ny]!='#'&&!vis[nx][ny]){
                q.push(P(nx,ny));
                vis[nx][ny]=1;
                res++;
            }
        }
    }
    return res;
}


int main(){
    while(cin>>n>>m&&n&&m){
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin>>mp[i][j];
                if(mp[i][j]=='@'){
                    sx=i;
                    sy=j;
                }
            }
        }
        int res=bfs();
        if(res!=INF) cout<<res<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
