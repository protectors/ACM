#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
#include <vector>
#include <set>
using namespace std;
const int maxn=100+10;
const int inf=0x3f3f3f3f;
typedef long long  ll;
int dp[maxn][maxn],n;
int main(){
    while(scanf("%d",&n)&&n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) dp[i][j]=inf;
            dp[i][i]=0;
        }
        for(int i=1;i<=n;i++){
            int m,j,v;
            scanf("%d",&m);
            while(m--){
                scanf("%d%d",&j,&v);
                dp[i][j]=v;
            }
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
        int t=0,ans=inf;
        for(int i=1;i<=n;i++){
            int mm=0;
            for(int j=1;j<=n;j++){
                mm=max(dp[i][j],mm);
            }
            if(ans>mm){
                ans=mm;
                t=i;
            }
        }
        if(t) printf("%d %d\n",t,ans);
        else printf("disjoint\n");
    }
    return 0;
}
