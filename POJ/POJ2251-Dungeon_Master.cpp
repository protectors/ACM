#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
char mp[30][30][30];
int vis[30][30][30];
int dir[6][3]={0,0,1,0,0,-1,0,1,0,0,-1,0,1,0,0,-1,0,0};
int L,R,C,sx,sy,sz,ex,ey,ez;
int res;
struct node{
    int x,y,z,step;
};
bool check(int l,int r,int c){
    if(l<0||r<0||c<0||l>=L||r>=R||c>=C) return true;
    else if(mp[l][r][c]=='#') return true;
    else if(vis[l][r][c]) return true;
    return false;
}
int bfs(){
    node a,next;
    queue<node> q;
    a.x=sx,a.y=sy,a.z=sz;
    a.step=0;
    vis[sx][sy][sz]=1;
    q.push(a);
    while(!q.empty()){
        a=q.front();
        q.pop();
        if(a.x==ex &&a.y==ey&&a.z==ez) return a.step;
        for(int i=0;i<6;i++){
            next=a;
            next.x=a.x+dir[i][0];
            next.y=a.y+dir[i][1];
            next.z=a.z+dir[i][2];
            if(check(next.x,next.y,next.z)) continue;
            vis[next.x][next.y][next.z]=1;
            next.step=a.step+1;
            q.push(next);
        }
    }
    return 0;
}
int main(){
    while(cin>>L>>R>>C&&L+R+C){
        res=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<L;i++){
            for(int j=0;j<R;j++){
                cin>>mp[i][j];
                cin.get();
                for(int k=0;k<C;k++){
                    if(mp[i][j][k]=='S') sx=i,sy=j,sz=k;
                    else if(mp[i][j][k]=='E') ex=i,ey=j,ez=k;
                }
            }
        }
        res=bfs();
        if(res) cout<<"Escaped in "<<res<<" minute(s).\n";
        else cout<<"Trapped!\n";
    }
    return 0;
}
