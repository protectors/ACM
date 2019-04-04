#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
#include <vector>
#include <set>
using namespace std;
const int inf=0x3f3f3f3f;
const int maxn=1000+10;
const int maxm=100000+10;
typedef long long  ll;
int h[maxn],nxt[maxm],h1[maxn],nxt1[maxm];
int dis[maxn];
bool vis[maxn];
struct node{
    int u,v,c;
    node(){}
    node(int u,int v,int c):u(u),v(v),c(c){}
}p[maxm];
struct P{
    int v,c;
    P(){}
    P(int v,int c):v(v),c(c){}
    bool operator < (const P &o) const{
        return c+dis[v]>o.c+dis[o.v];
    }
};
int n,m,e,st,en,k;
void add(int u,int v,int c){
    p[e]=node(u,v,c);
    nxt[e]=h[u];
    h[u]=e;
    nxt1[e]=h1[v];
    h1[v]=e++;
}
void init(){
    memset(h,-1,sizeof(h));
    memset(h1,-1,sizeof(h1));
    e=0;
    for(int i=0;i<m;i++){
        int u,v,c;
        scanf("%d%d%d",&u,&v,&c);
        add(u,v,c);
    }
}
void dij(int src){
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++) dis[i]=inf;
    dis[src]=0;
    priority_queue<P> que;
    que.push(P(src,dis[src]));
    while(!que.empty()){
        P pre=que.top();
        que.pop();
        vis[pre.v]=true;
        for(int j=h1[pre.v];j+1;j=nxt1[j]){
            if(dis[p[j].u]>dis[pre.v]+p[j].c){
                dis[p[j].u]=dis[pre.v]+p[j].c;
                que.push(P(p[j].u,0));
            }
        }
        while(!que.empty()&&vis[que.top().v]) que.pop();
    }
}
int a_star(int src){
    priority_queue<P> que;
    que.push(P(src,0));
    k--;
    while(!que.empty()){
        P pre=que.top();
        que.pop();
        if(pre.v==en){
            if(k) k--;
            else return pre.c;
        }
        for(int i=h[pre.v];i+1;i=nxt[i])
            que.push(P(p[i].v,pre.c+p[i].c));
    }
    return -1;
}
int main(){
    while(scanf("%d%d",&n,&m)!=EOF){
        init();
        scanf("%d%d%d",&st,&en,&k);
        dij(en);
        if(dis[st]==inf){
            printf("-1\n");
            continue;
        }
        if(st==en) k++;
        printf("%d\n",a_star(st));
    }
    return 0;
}
