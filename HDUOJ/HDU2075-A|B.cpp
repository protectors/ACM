#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}