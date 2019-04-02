#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,a,s;
    cin>>n;
    while(n--){
        s=3;
        cin>>a;
        for(int i=1;i<=a;i++){
            s=(s-1)*2;
        }
        cout<<s<<endl;
    }
    return 0;
}
