//f(n,k)=k!*((k+1)^(n-k)-k^(n-k))%mod
#include <cstdio>
#include <iostream>
using namespace std;
typedef long long  ll;
const ll mod=20100713;
const int maxn=1000005;
ll jc[maxn];
ll qmul(ll a,ll b){
    ll ans=0;
    while(b){
        if(b&1) ans=(ans+a)%mod;
        a=(a+a)%mod;
        b>>=1;
    }
    return ans;
}
ll qmod(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}
void pre(){
    jc[0]=jc[1]=1;
    for(int i=2;i<=1000000;i++) jc[i]=(jc[i-1]*i)%mod;
}
int main(){
    ll t,n,k;
    ll ans1,ans2,ans;
    pre();
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&k);
        if(k==0) ans=1;
        else{
            ans1=ans2=jc[k];
            ans1*=qmod(k+1,n-k)%mod;
            ans1%=mod;
            ans2*=qmod(k,n-k)%mod;
            ans2%=mod;
            ans=(ans1+mod-ans2)%mod;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
