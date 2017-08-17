#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n,m;
    while(cin>>n>>m&&n||m){
        if(n>m) swap(n,m);
        cout<<n*m*(m-1)+m*n*(n-1)+2*n*(n-1)*(3*m-n-1)/3<<endl;
    }
    return 0;
}
