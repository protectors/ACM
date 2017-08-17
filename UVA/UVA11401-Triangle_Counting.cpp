#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=1000000+10;
long long f[maxn];
int main(){
    long long n;
    f[3]=0;
    for(long long i=4;i<maxn;i++)
        f[i]=f[i-1]+((i-1)*(i-2)/2-(i-1)/2)/2;
    while(cin>>n){
        if(n<3) break;
        cout<<f[n]<<endl;
    }
    return 0;
}
