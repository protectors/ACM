#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int powermod(int a,int b,int c){
    int ans=1;
    while(b>0){
        a%=c;
        if(b%2==1) ans=(ans*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ans;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=powermod(n,n,10);
        cout<<ans<<endl;
    }
    return 0;
}
