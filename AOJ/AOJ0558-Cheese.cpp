#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

typedef pair<int, int> P;

int h,w,n;
int sx,sy,gx,gy;

char mp[1010][1010];
int dis[1010][1010];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int res=0;

vector<P> g;

void bfs(){
    queue<P> q;
    res=0;

    for(int k=1;k<=n;k++){
        sx=g[k-1].first;
        sy=g[k-1].second;
        gx=g[k].first;
        gy=g[k].second;

        memset(dis,-1,sizeof(dis));
        q.push(P(sx,sy));
        dis[sx][sy]=0;

        while(!q.empty()){
            P cur=q.front();
            q.pop();

//            if(cur.first==gx && cur.second==gy) break;

            for(int i=0;i<4;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];

                if(0<=nx&&nx<h && 0<=ny&&ny<w && mp[nx][ny]!='X' && dis[nx][ny]==-1){
                    q.push(P(nx,ny));
                    dis[nx][ny]=dis[cur.first][cur.second]+1;
                }
            }
        }
        res+=dis[gx][gy];
    }
}


int main(){
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>mp[i][j];
            if(mp[i][j]=='S'){
                mp[i][j]='0';
                sx=i;
                sy=j;
            }
        }
    }

    for(int k=0;k<=n;k++){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(mp[i][j]==k+'0')
                    g.push_back(P(i,j));
            }
        }
    }

    res=0;
    bfs();
    cout<<res<<endl;
    return 0;
}
