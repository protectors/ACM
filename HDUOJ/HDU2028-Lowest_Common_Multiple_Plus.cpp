#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int m,int n){
    if(m<n) swap(m,n);
    if(n==0) return m;
    else    return gcd(n,m%n);
}
int lcd(int m,int n)
{
    return m/gcd(m,n)*n;
}
int main(){
    int n,a[110];
    while(cin>>n){
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            a[i]=lcd(a[i],a[i-1]);
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}