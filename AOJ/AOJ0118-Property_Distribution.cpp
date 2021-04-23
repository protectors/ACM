#include <iostream>
#include <queue>
using namespace std;
int n,m;
char mp[110][110];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


typedef pair<int,int> P;
void bfs(int x,int y, char c){
    queue<P> q;

    mp[x][y]='.';

    q.push(P(x,y));
    while(!q.empty()){
        P cur=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&mp[nx][ny]==c){
                mp[nx][ny]='.';
                q.push(P(nx,ny));
            }
        }
    }

}

int main(){
    while(cin>>n>>m&&n&&m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mp[i][j];
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mp[i][j]=='@'|| mp[i][j]=='#' || mp[i][j]=='*'){
                    res++;
                    bfs(i,j,mp[i][j]);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}