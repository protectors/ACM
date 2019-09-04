#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std ;

int digit[20];
long long dp[20][2];

//if4=>status （状态）当前数位上数是否是4,它的上一位是否是4
//limit=>它的上一位是否是上界
long long dfs(int len,bool if4,bool limit){
    if(len==0) return 1;
    if(!limit && dp[len][if4]) return dp[len][if4];
    long long cnt=0,up_bound=(limit?digit[len]:9);
    for(int i=0;i<=up_bound;i++){
        if(if4 && i==9) continue;
        cnt+=dfs(len-1,i==4,limit&&i==up_bound);
    }
    if(!limit) dp[len][if4]=cnt;
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
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<n+1-solve(n)<<endl;
    }
    return 0;
}
