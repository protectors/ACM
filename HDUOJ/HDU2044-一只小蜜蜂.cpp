#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
long long f[60]={0,1,2,};
int main(){
    int t,a,b;
    for(int i=3;i<60;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<f[b-a]<<endl;
    }
    return 0;
}
