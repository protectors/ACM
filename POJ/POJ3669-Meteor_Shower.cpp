#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;
const int maxn=510;

struct node{ int x,y,t; };
int mp[maxn][maxn];

int dx[]={0,1,0,-1,0};
int dy[]={0,0,1,0,-1};

int bfs(){
//    if(mp[0][0] == 0) return -1;   // 可加可不加，加了能够减少计算时间
    if(mp[0][0]==-1) return 0;

    node tmp, cur;
    tmp.x=tmp.y=tmp.t=0;
    queue<node> q;
    q.push(tmp);

    while(!q.empty()){
        cur=q.front();
        q.pop();
        for(int i =0;i<5;i++){
            tmp.x=cur.x+dx[i];
            tmp.y=cur.y+dy[i];
            tmp.t=cur.t+1;
            if(0<= tmp.x&&tmp.x<maxn && 0<=tmp.y&&tmp.y<maxn){
                if(mp[tmp.x][tmp.y]==-1) return tmp.t;
                if(tmp.t<mp[tmp.x][tmp.y]){
                    mp[tmp.x][tmp.y]=tmp.t;
                    q.push(tmp);
                }
            }
        }
    }
    return -1;

}

int main(){
    int n,x,y,t;
    scanf("%d",&n);
    memset(mp,-1,sizeof(mp));
    for(int k=0;k<n;k++){
        scanf("%d%d%d",&x,&y,&t);
        for(int i=0;i<5;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(0<= nx && nx<maxn && 0<=ny  && ny<maxn){
                mp[nx][ny]=mp[nx][ny]==-1?t:min(mp[nx][ny],t);
            }
        }
    }
    printf("%d\n",bfs());
    return 0;
}