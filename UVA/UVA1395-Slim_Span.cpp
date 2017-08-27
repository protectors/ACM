#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn=100+10;
const int INF=1000000000;
int n;
int p[maxn];
int find(int x){return p[x]==x?x:find(p[x]);}

struct Edge{
    int u,v,d;
    Edge(int u,int v,int d):u(u),v(v),d(d){}
    bool operator <(const Edge&rhs) const{
        return d<rhs.d;
    }
};

vector<Edge> e;

int solve(){
    int m=e.size();
    sort(e.begin(),e.end());
    int ans=INF;
    for(int L=0;L<m;L++){
        for(int i=1;i<=n;i++) p[i]=i;
        int cnt=n;
        for(int R=L;R<m;R++){
            int u=find(e[R].u),v=find(e[R].v);
            if(u!=v){
                p[u]=v;
                if(--cnt==1) {ans=min(ans,e[R].d-e[L].d);break;}
            }
        }
    }
    if(ans==INF) ans=-1;
    return ans;
}

int main(){
    int m,u,v,d;
    while(cin>>n>>m&&n){
        e.clear();
        for(int i=0;i<m;i++){
            cin>>u>>v>>d;
            e.push_back(Edge(u,v,d));
        }
        cout<<solve()<<endl;
    }
    return 0;
}
