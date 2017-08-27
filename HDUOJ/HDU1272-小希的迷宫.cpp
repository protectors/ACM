#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=100000+10;
int p[maxn],vis[maxn];
int flag;

int find(int x){return p[x]==x?x:p[x]= find(p[x]);}
void join(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy) p[fx]=fy;
    else flag=0;
}

void init(){
    memset(vis,0,sizeof(vis));
    for(int i=1;i<maxn;i++) p[i]=i;
}
int main(){
    int u,v,ans;
    while(cin>>u>>v){
        if(u==-1&&v==-1) break;
        if(u==0&&v==0){cout<<"Yes\n";continue;}
        init();
        vis[u]=1;vis[v]=1;
        flag=1;
        join(u,v);
        while(cin>>u>>v,u||v){
            vis[u]=1;
            vis[v]=1;
            join(u,v);
        }
        ans=0;
        for(int i=1;i<maxn;i++){
            if(p[i]==i&&vis[i])
                ans++;
            if(ans>1){flag=0;break;}
        }
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
