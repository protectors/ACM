#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int f(int n){
    if(n==1) return 2;
    else return f(n-1)+4*(n-1)+1;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<f(n)<<endl;
    }
    return 0;
}
