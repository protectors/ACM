#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

const int maxn=1100;
int v[maxn],w[maxn],dp[maxn];

int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        cin>>n>>m;
        memset(dp,0,sizeof(dp));    //this is important
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) cin>>w[i];
        for(int i=0;i<n;i++){
            for(int j=m;j>=w[i];j--)
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
        cout<<dp[m]<<endl;
    }
    return 0;
}
