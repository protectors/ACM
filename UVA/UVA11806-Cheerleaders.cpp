#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int MOD = 1e6+7;
const int maxn=500+10;

int C[maxn][maxn];

int main(){
    memset(C,0,sizeof(C));
    C[0][0]=1;
    for(int i=0;i<maxn;i++){
        C[i][0]=C[i][i]=1;
        for(int j=1;j<i;j++)
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%MOD;
    }
    int t,n,m,k,sum;
    cin>>t;
    for(int kase=1;kase<=t;kase++){
        cin>>n>>m>>k;
        sum=0;
        for(int S=0;S<16;S++){
            int b=0,r=n,c=m;
            if(S&1) {r--;b++;}
            if(S&2) {r--;b++;}
            if(S&4) {c--;b++;}
            if(S&8) {c--;b++;}
            if(b&1) sum=(sum+MOD-C[r*c][k])%MOD;
            else sum=(sum+C[r*c][k])%MOD;
        }
        printf("Case %d: %d\n",kase,sum);
    }
    return 0;
}
