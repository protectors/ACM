#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void fun(int n,int r){
    int t=n%r;
    if(n==0) return;
    fun(n/r,r);
    if(t>=10) cout<<(char)(t+55);
    else cout<<t;
}
int main(){
    int n,r;
    while(cin>>n>>r){
        if(n==0) cout<<"0"<<endl;
        else if(n<0){
          cout<<"-";
            fun(-n,r);
        }
        else
            fun(n,r);
        cout<<endl;
    }
    return 0;
}