#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int dp[20][2],d[20];
int dfs(int pos,int pre,int sta,bool lim){
    if(pos==-1) return 1;
    if(!lim&&dp[pos][sta]!=-1) return dp[pos][sta];
    int up=lim?d[pos]:9;
    int ans=0;
    for(int i=0;i<=up;i++){
        if(pre==6&&i==2) continue;
        if(i==4) continue;
        ans+=dfs(pos-1,i,i==6,lim&&i==d[pos]);
    }
    if(!lim) dp[pos][sta]=ans;
    return ans;
}
int solve(int x){
    int pos=0;
    while(x){
        d[pos++]=x%10;
        x/=10;
    }
    return dfs(pos-1,-1,0,true);
}
int main(){
    int n,m;
    while(cin>>n>>m&& n||m){
        memset(dp,-1,sizeof(dp));
        printf("%d\n",solve(m)-solve(n-1));
    }
    return 0;
}
