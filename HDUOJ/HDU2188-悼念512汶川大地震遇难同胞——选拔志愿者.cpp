#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int t,n,m,s;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n%(m+1)==0) cout<<"Rabbit\n";
        else cout<<"Grass\n";
    }
    return 0;
}
