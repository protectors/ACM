#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
#include <vector>
#include <set>
using namespace std;
const int maxn=1e6+6;
const int inf=0x3f3f3f3f;
typedef long long  ll;
int h[maxn],nxt[maxn];
ll dis[maxn];
bool vis[maxn];
struct node{
    int u,v;
    ll c;
    node(){}
    node(int u,int v,int c):u(u),v(v),c(c){}
}p[maxn];
int n,m,e;
int now[maxn];
void add(int u,int v,int c){
    p[e]=node(u,v,c);
    nxt[e]=h[u];
    h[u]=e++;
}
bool relax(int u,int v,int c){
    if(dis[v]>dis[u]+c){
        dis[v]=dis[u]+c;
        return true;
    }
    return false;
}
void init(){
    memset(h,-1,sizeof(h));
    memset(nxt,-1,sizeof(nxt));
    e=0;
    for(int i=0;i<m;i++){
        int u,v,c;
        scanf("%d%d%d",&u,&v,&c);
        add(u,v,c);
        //add(v,u,c):
    }
}
void un_init(){
    memset(h,-1,sizeof(h));
    memset(nxt,-1,sizeof(nxt));
    e=0;
    for(int i=0;i<m;i++) add(p[i].v,p[i].u,p[i].c);
}
ll get_sum(ll a[]){
    ll res=0;
    for(int i=1;i<=n;i++) res+=a[i];
    return res;
}
void spfa(int src){
    memset(vis,0,sizeof(vis));
    memset(now,0,sizeof(now));
    for(int i=1;i<=n;i++) dis[i]=inf;
    dis[src]=0;
    vis[src]=true;
    queue<int> que;
    que.push(src);
    while(!que.empty()){
        int pre=que.front();
        que.pop();
        vis[pre]=false;
        for(int i=h[pre];i+1;i=nxt[i]){
            if(relax(p[i].u, p[i].v, p[i].c)&& !vis[p[i].v]){
                que.push(p[i].v);
                vis[p[i].v]=true;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        init();
        spfa(1);
        long long ans=get_sum(dis);
        un_init();
        spfa(1);
        ans+=get_sum(dis);
        printf("%lld\n",ans);
    }
    return 0;
}
