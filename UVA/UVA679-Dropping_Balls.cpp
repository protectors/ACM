#include <cstdio>
#include <iostream>
#include <cstring>
const int maxn=20;
using namespace std;

int main(){
    int k,t,D,I;
    while(cin>>t&&t>=0){
        while(t--){
            cin>>D>>I;
            k=1;
            for(int j=0;j<D-1;j++)
            {
                if(I%2){k=k*2;I=(I+1)/2;}
                else {k=k*2+1;I/=2;}
            }
            cout<<k<<endl;
        }
    }
    return 0;
}
