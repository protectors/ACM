#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
const int maxn=5005;
int dp[2][maxn];
int main(){
    int n,len1,len2;
    string s1,s2;
    while(cin>>n){
        cin>>s1;
        s2=s1;
        reverse(s1.begin(),s1.end());
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);
                if(s1[i-1]==s2[j-1]){
                    int t=dp[(i-1)%2][j-1]+1;
                    dp[i%2][j]=max(dp[i%2][j],t);
                }
            }
        }
        cout<<n-dp[n%2][n]<<endl;
    }
    return 0;
}
