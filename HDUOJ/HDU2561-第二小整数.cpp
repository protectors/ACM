#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int a[110];
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[1]<<endl;
    }
    return 0;
}
