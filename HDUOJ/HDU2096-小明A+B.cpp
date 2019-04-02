#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        c=a%100+b%100;
        cout<<c%100<<endl;
    }
    return 0;
}
