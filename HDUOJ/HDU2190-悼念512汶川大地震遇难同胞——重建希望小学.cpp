#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int fun(int n){
    if(n==1) return 1;
    else if(n==2) return 3;
    else return fun(n-1)+2*fun(n-2);
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<fun(n)<<endl;
    }
    return 0;
}
