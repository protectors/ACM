       #include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int a[400];
int main(){
    int n,s,min,g;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    min=400;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            g=2*abs(s-180);
            if(min>g) min=g;
        }
    }
    cout<<min<<endl;
    return 0;
}
