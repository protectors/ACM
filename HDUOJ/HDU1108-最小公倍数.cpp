#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int gcd(int m,int n){
    if(m<n){int t=m;m=n;n=t;}
    return n==0?m:gcd(n,m%n);
}
int lcd(int m,int n){
    return m/gcd(m,n)*n;
}
int main(){
    int m,n;
    while(cin>>n>>m){
        cout<<lcd(n,m)<<endl;
    }
    return 0;
}
