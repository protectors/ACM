#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int f[50];
    f[1]=f[2]=1;
    for(int i=3;i<50;i++){
        f[i]=f[i-1]+f[i-2];
    }
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        cout<<f[m]<<endl;
    }
    return 0;
}
