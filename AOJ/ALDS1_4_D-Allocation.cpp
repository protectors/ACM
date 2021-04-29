#include <iostream>
using namespace std;

typedef long long ll;
const int MAX=100010;
int n,k;
ll w[MAX];

int check(ll p){
    int count=0;
    for(int i=0;i<k;i++){
        ll s=0;
        while(s+w[count]<=p){
            s+=w[count];
            count++;
            if(count==n) return n;
        }
    }
    return count;
}

int solve(){
    ll l=0;
    ll r=100000*10000;
    ll mid;
    while(l+1<r){
        mid=(l+r)/2;
        int v=check(mid);
        if(v>=n) r=mid;
        else l=mid;
    }
    return r;
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>w[i];
    ll res=solve();
    cout<<res<<endl;
    return 0;
}