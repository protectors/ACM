#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        double x=n*log10(n);
        int a=pow(10,x-floor(x));
        cout<<a<<endl;
    }
    return 0;
}
