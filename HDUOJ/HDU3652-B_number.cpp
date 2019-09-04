#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std ;
int dig[20];
int dp[20][20][3];
//dp[i][j][k],i表示当前位数（与len长度注意区别），j表示取余后的值
//k表示：
//k==0 当前位含1，但第二位不为3
//k==1 当前位不含1，但第二位含1
//k==2 为13

int dfs(int pos,int mod,int if1,bool lim){
    if(pos<0) return mod==0 && if1==2;
    if(!lim && dp[pos][mod][if1]!=-1) return dp[pos][mod][if1];
    int cnt=0;
    int up=lim?dig[pos]:9;
    for(int i=0;i<=up;i++){
        int mx=(mod*10+i)%13;
        int ok=if1;
        if(if1==0 && i==1) ok=1;
        if(if1==1 && i!=1) ok=0;
        if(if1==1 && i==3) ok=2;
        cnt+=dfs(pos-1,mx,ok,lim&& i==up);
    }
    if(!lim) dp[pos][mod][if1]=cnt;
    return cnt;
}

int solve(int n){
    int k=0;
    while(n){
        dig[k++]=n%10;
        n/=10;
    }
    return dfs(k-1,0,0,true);
}
int main(){
    int n;
    while(cin>>n){
        memset(dp,-1,sizeof(dp));
        cout<<solve(n)<<endl;
    }
    return 0;
}

