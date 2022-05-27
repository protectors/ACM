#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX=50010;
const int INFTY=1<<29;

int n,m;
int c[21];
int f[MAX];

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>c[i];

    for(int i=0;i<MAX;i++) f[i]=INFTY;
    f[0]=0;

    for(int i=1;i<=m;i++){
        for(int j=0;j+c[i]<=n;j++){
            f[j+c[i]]=min(f[j+c[i]],f[j]+1);
        }
    }

    cout<<f[n]<<endl;
    return 0;
}
