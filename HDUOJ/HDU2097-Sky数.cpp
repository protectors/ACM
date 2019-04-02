#include <iostream>
using namespace std;
bool issky(int n){
    int tmp,t10,t12,t16;
    t10=t12=t16=0;
    tmp=n;
    while(tmp){
        t10+=tmp%10;
        tmp/=10;
    }
    tmp=n;
    while(tmp){
        t12+=tmp%12;
        tmp/=12;
    }
    tmp=n;
    while(tmp){
        t16+=tmp%16;
        tmp/=16;
    }
    //cout<<t10<<endl<<t12<<endl<<t16<<endl;
    if(t12==t16 && t10==t12)
        return true;
    else
        return false;
}
int main(){
    int n;
    while(cin>>n&&n){
        if(issky(n))
            cout<<n<<" is a Sky Number.\n";
        else
            cout<<n<<" is not a Sky Number.\n";
    }
    return 0;
}
