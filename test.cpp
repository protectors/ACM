#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAXN = 10010;

int n,W;
int w[MAXN], v[MAXN];
int dp[MAXN+1];

void solve(){
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=W;j>=w[i];j--){
            dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
        }
    }
    cout<<dp[W]<<endl;
}

int main(){
    cin>>n>>W;
    for(int i=0;i<n;i++) cin>>v[i]>>w[i];
    solve();
    return 0;
}