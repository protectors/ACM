#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int powermod(int a,int b,int c){
    int ans=1;
    while(b>0){
        a%=c;
        if(b%2==1) ans=(ans*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ans;
}

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        cout<<powermod(a,b,c)<<endl;
    }
    return 0;
}
