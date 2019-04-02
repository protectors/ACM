#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int f[100][100],a[100][100];
int main(){
    int t,n;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++) cin>>a[i][j];
        for(int i=1;i<=n;i++) f[n][i]=a[n][i];
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                f[i][j]=a[i][j]+max(f[i+1][j+1],f[i+1][j]);
            }
        }
        cout<<f[1][1]<<endl;
    }
    return 0;
}
