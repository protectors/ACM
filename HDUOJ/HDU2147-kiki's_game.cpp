#include <iostream>
using namespace std;
int main(){
    int m,n;
    while(cin>>m>>n&&m&&n){
        if(m%2==0||n%2==0) cout<<"Wonderful!"<<endl;
        else cout<<"What a pity!"<<endl;
    }
    return 0;
}