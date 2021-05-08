#include <iostream>
#include <cstring>
using namespace std;
const int N=101;

int main(){
    int m[N][N];
    int n,u,k,v;
    cin>>n;

    memset(m,0,sizeof(m));

    for(int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v;
            m[u][v]=1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m[i][j];
            if(j!=n) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}