#include <cstdio>
#include <iostream>
using namespace std;
int f(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,t,ans;
    cin>>n;
    ans=0;
    while(n--){
        cin>>t;
        if(f(t)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}