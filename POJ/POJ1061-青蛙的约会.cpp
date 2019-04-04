#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long  ll;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void  ex_gcd(ll a,ll b,ll &x,ll &y){
    if(b==0){ x=1; y=0; return;}
    ex_gcd(b,a%b,x,y);
    ll t=x;
    x=y;
    y=t-a/b*y;
}
int main(){
    ll x,y,m,n,L,a,b,c,r,t,j1,j2;
    while(scanf("%lld%lld%lld%lld%lld",&x,&y,&m,&n,&L)!=EOF){
        j1=j2=0;
        a=n-m;
        b=L;
        c=x-y;
        r=gcd(a,b);
        if(c%r){
            printf("Impossible\n");
            continue;
        }
        a/=r;
        b/=r;
        c/=r;
        ex_gcd(a, b, j1, j2);
        j1=(j1*c%b+b)%b;
        printf("%lld\n",j1);
    }
    return 0;
}
