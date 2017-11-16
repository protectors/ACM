#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=170;
int a[maxn],b[maxn],f[maxn];
int main(){
    int t,n,k;
    cin>>t;

    k=0;
    memset(a,0,sizeof(a));
    memset(f,0,sizeof(f));
    for(int i=1;i<maxn;i++){
        if(a[i]==1) b[k++]=i;
        for(int j=2;i*j<maxn;j++) a[i*j]+=i;
    }

    f[0]=1;
    for(int i=0;i<k;i++){
        for(int j=b[i];j<maxn;j++)
            f[j]+=f[j-b[i]];
    }

    while(t--){
        cin>>n;
        cout<<f[n]<<endl;
    }
    return 0;
}
