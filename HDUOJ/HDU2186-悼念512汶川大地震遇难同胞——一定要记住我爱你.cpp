#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int s,a,b,c,t,ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>s;
        a=s/2,s-=a,ans+=(a+9)/10;
        b=s*2/3,s-=b,ans+=(b+9)/10;
        c=s,ans+=(c+9)/10;
        //cout<<a<<" "<<b<<" "<<c<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
