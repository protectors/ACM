#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int maxn=100001;
int n,k;
int res,mas;
bool vis[maxn];
int step[maxn];
queue<int> q;
int bfs(int n,int k){
    int head,next;
    q.push(n);
    step[n]=0;
    vis[n]=true;
    while(!q.empty()){
        head=q.front();
        q.pop();
        for(int i=0;i<3;i++){
            if(i==0) next=head-1;
            else if(i==1) next=head+1;
            else next=head*2;
            if(next<0||next>=maxn)continue;
            if(!vis[next]){
                q.push(next);
                step[next]=step[head]+1;
                vis[next]=true;
            }
            if(next==k) return step[next];
        }
    }
    return 0;
}
int main(){
    while(cin>>n>>k){
        memset(step,0,sizeof(step));
        memset(vis,false,sizeof(vis));
        while(!q.empty()) q.pop();
        if(n>=k) cout<<n-k<<endl;
        else cout<<bfs(n,k)<<endl;
    }
    return 0;
}
