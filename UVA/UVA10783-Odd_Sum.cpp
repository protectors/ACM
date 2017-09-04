#include <iostream>
using namespace std;
int main(){
    int t,a,b,s,kase=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        s=0;
        for(int i=a;i<=b;i++){
            if(i%2) s+=i;
        }
        cout<<"Case "<<++kase<<": "<<s<<endl;
    }
    return 0;
}
