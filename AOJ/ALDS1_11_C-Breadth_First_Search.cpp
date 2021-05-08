#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int N=100;

int n,m[N][N];
int d[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    for(int i=0;i<n;i++) d[i]=-1;
    d[s]=0;
    int u;
    while(!q.empty()){
        u=q.front(); q.pop();
        for(int v=0;v<n;v++){
            if(m[u][v]==0) continue;
            if(d[v]!=-1) continue;
            d[v]=d[u]+1;
            q.push(v);
        }
    }

    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<((d[i]==-1)?-1:d[i])<<endl;
    }
}

int main(){
    int u,v,k;
    cin>>n;
    memset(m,0,sizeof(m));

    for(int i=0;i<n;i++){
        cin>>u>>k;
        u--;
        for(int j=0;j<k;j++){
            cin>>v;
            v--;
            m[u][v]=1;
        }
    }

    bfs(0);

    return 0;
}