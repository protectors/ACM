#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod =1e9+7;

ll qpow(ll a,ll b){
    ll ans=1;
    while(b){
        a%=mod;
        if(b&1) ans=ans*a%mod;
        b>>=1;
        a=a*a%mod;
    }
    return ans;
}

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    if((n%2)!=(m%2) && k==-1) cout<<0<<endl;
    else cout<<qpow(qpow(2,n-1),m-1)<<endl;
    return 0;
}
