#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
const int maxn=5005;
int dp[maxn][maxn]={0};
int main(){
    int len1,len2;
    string s1,s2;
    while(cin>>s1>>s2){
        len1=s1.size();
        len2=s2.size();
        for(int i=1;i<=len1;i++){
            for(int j=1;j<=len2;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[len1][len2]<<endl;
    }
    return 0;
}
