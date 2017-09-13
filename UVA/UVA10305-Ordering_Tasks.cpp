#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int maxn=1000+10;

int n,m,G[maxn][maxn];

int c[maxn],topo[maxn],t;
bool dfs(int u){
    c[u]=1;
    for(int v=0;v<n;v++) if(G[u][v]){
        if(c[u]<0) return false;
        else if(!c[v] && !dfs(v)) return false;
    }
    c[u]=1;topo[--t]=u;
    return true;
}
bool toposort(){
    t=n;
    memset(c,0,sizeof(c));
    for(int u=0;u<n;u++) if(!c[u])
        if(!dfs(u)) return false;
    return true;
}

int main(){
    while(cin>>n>>m&&n){
        memset(G,0,sizeof(G));
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;u--;v--;
            G[u][v]=1;
        }
        if(toposort()){
            for(int i=0;i<n-1;i++) cout<<topo[i]+1<<" ";
            cout<<topo[n-1]+1<<endl;
        }
        else cout<<"no\n";
    }
    return 0;
}
