#include <iostream>
#include <cstring>
using namespace std;
const int N=101;
const int WHITE=0;
const int GRAY=1;
const int BLACK=2;

int n,m[N][N];
int color[N], d[N], f[N],tt;

// 递归函数实现dfs
void dfs_visit(int u){
    int v;
    color[u]=GRAY;
    d[u]=++tt;
    for(v=0;v<n;v++){
        if(m[u][v]==0) continue;
        if(color[v]==WHITE) dfs_visit(v);
    }
    color[u]=BLACK;
    f[u]=++tt;
}

void dfs(){
    int u;
    memset(color,WHITE,sizeof(color));
    tt=0;

    for(u=0;u<n;u++){
        //未访问的u为起点进行深度优先搜索
        if(color[u]==WHITE) dfs_visit(u);
    }

    for(u=0;u<n;u++) cout<<u+1<<" "<<d[u]<<" "<<f[u]<<endl;

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

    dfs();

    return 0;
}