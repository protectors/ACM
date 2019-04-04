#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
#include <vector>
#include <set>
using namespace std;
const int maxn=1000+6;
const int inf=0x3f3f3f3f;
int a[maxn][maxn];
int dis[maxn];
bool vis[maxn];
int n,m,e;
void dij(int s){
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++) dis[i]=a[s][i];
    vis[s]=true;
    for(int i=1;i<n;i++){
        int t=0,k=s;
        for(int j=1;j<=n;j++){
            if(!vis[j]&&t<=dis[j]){
                t=dis[j];
                k=j;
            }
        }
        vis[k]=true;
        if(vis[n]) return;
        for(int j=1;j<=n;j++){
            if(!vis[j]) dis[j]=max(dis[j],min(dis[k],a[k][j]));
        }
    }
}
int main(){
    int t,ca=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        memset(a,0,sizeof(a));
        for(int i=0;i<m;i++){
            int u,v,c;
            scanf("%d%d%d",&u,&v,&c);
            a[u][v]=a[v][u]=max(a[u][v],c);
        }
        dij(1);
        printf("Scenario #%d:\n",ca++);
        printf("%d\n\n",dis[n]);
    }
    return 0;
}
