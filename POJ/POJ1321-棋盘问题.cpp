#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char mp[10][10];
int vis[10];
int n,k,m;
int res=0;
void dfs(int cur){
    if(k==m){ res++;return;}
    if(cur>=n) return;
    for(int j=0;j<n;j++){
        if(vis[j]==0&&mp[cur][j]=='#'){
            vis[j]=1;
            m++;
            dfs(cur+1);
            vis[j]=0;
            m--;
        }
    }
    dfs(cur+1);
}
int main(){
    while(cin>>n>>k&&n!=-1&&k!=-1){
        res=0;
        m=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++) cin>>mp[i];
        dfs(0);
        cout<<res<<endl;
    }
    return 0;
}
