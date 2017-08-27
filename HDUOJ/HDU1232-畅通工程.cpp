#include <iostream>
#include <cstdio>
using namespace std;
int p[1100];
int find(int x){return p[x]==x?x:find(p[x]);}
void join(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy) p[fx]=fy;
}
int main(){
    int n,m,u,v,ans;
    while(cin>>n>>m&&n){
        ans=0;
        for(int i=1;i<=n;i++) p[i]=i;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            join(u,v);
        }
        for(int i=1;i<=n;i++) if(p[i]==i) ans++;
        cout<<ans-1<<endl;
    }
    return 0;
}
