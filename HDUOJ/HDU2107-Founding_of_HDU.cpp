#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,t;
    while(cin>>n&&n){
        int maxn=-1;
        for(int i=1;i<=n;i++){
            cin>>t;
            if(t>maxn) maxn=t;
        }
        cout<<maxn<<endl;
    }
    return 0;
}
