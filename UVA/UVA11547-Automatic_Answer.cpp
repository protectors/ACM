#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        n*=567; n/=9;  n+=7492;
        n*=235; n/=47; n-=498;
        n=abs(n);
        printf("%d\n",n%100/10);
    }
    return 0;
}
