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


/*
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std ;

int digit[20];
long long dp[20][2];

long long dfs(int len,bool if6,bool limit){
    if(len==0) return 1;
    if(!limit && dp[len][if6]) return dp[len][if6];
    long long cnt=0,up_bound=(limit?digit[len]:9);
    for(int i=0;i<=up_bound;i++){
        if(if6 && i==2) continue;
        if(i==4) continue;
        cnt+=dfs(len-1,i==6,limit&&i==up_bound);
    }
    if(!limit) dp[len][if6]=cnt;
    return cnt;
}

long long solve(long long n){
    int k=0;
    while(n){
        digit[++k]=n%10;
        n/=10;
    }
    return dfs(k,false,true);
}

int main(){
    long long n,m;
    while(cin>>n>>m&&n+m){
        cout<<solve(m)-solve(n-1)<<endl;
    }
    return 0;
}
*/
