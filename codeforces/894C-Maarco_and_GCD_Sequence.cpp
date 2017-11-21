#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int a[5010];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=2;i<=n;i++)
    if(a[i]%a[1]) {cout<<-1<<endl;return 0;}
    cout<<2*n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<a[i]<<endl;
            break;
        }
        cout<<a[i]<<' '<<a[1]<<' ';
    }
    return 0;
}
