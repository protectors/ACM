#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int MAX=100000;
const int INFTY=1<<30;

class Edge{
public:
    int t,w;
    Edge(){}
    Edge(int t, int w):t(t),w(w){}
};

vector<Edge> G[MAX];
int n,d[MAX];

bool vis[MAX];
int cnt;

void bfs(int s){
    for(int i=0;i<n;i++) d[i]=INFTY;
    queue<int> q;
    q.push(s);
    d[s]=0;
    int u;
    while(!q.empty()){
        u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++){
            Edge e=G[u][i];
            if(d[e.t]==INFTY){
                d[e.t]=d[u]+e.w;
                q.push(e.t);
            }
        }
    }
}

int main(){
    int s,t,w;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>s>>t>>w;
        G[s].push_back(Edge(t,w));
        G[t].push_back(Edge(s,w));
    }

    // 从任选的结点s出发,选择距离s最远的结点tgt
    bfs(0);
    int maxv=0;
    int tgt=0;
    for(int i=0;i<n;i++){
        if(d[i]==INFTY) continue;
        if(maxv<d[i]){
            maxv=d[i];
            tgt=i;
        }
    }

    // 从tgt出发,求结点tgt到最远节点的距离maxv
    bfs(tgt);
    maxv=0;
    for(int i=0;i<n;i++){
        if(d[i]==INFTY) continue;
        maxv=max(maxv, d[i]);
    }

    cout<<maxv<<endl;

    return 0;
}