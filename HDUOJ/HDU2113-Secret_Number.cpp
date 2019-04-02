#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,flag=0;
    while(cin>>n){
        int ans=0,s=n;
        while(s){
            if(s%2==0) ans+=s%10;
            s/=10;
        }
        if(flag) cout<<endl;    //首行无空行，中间有空行技巧
        cout<<ans<<endl;
        flag=1;
    }
    return 0;
}
