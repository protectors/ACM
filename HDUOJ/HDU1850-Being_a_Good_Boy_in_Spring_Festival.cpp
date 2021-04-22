#include <iostream>
using namespace std;
int main(){
    int m, a[101];
    while(cin>>m && m){
        int res=0;
        for(int i=0;i<m;i++){
            cin>>a[i];
            res^=a[i];
        }
        int count=0;
        for(int i=0;i<m;i++){
            if((a[i]^res)<a[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}