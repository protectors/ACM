#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=1000+10;
const int N=20;
int f[N],SG[maxn],S[maxn];
void getSG(int n){
    int i,j;
    memset(SG,0,sizeof(SG));
    for(i=1;i<=n;i++){
        memset(S,0,sizeof(S));
        for(j=0;f[j]<=i&&j<=N;j++)
            S[SG[i-f[j]]]=1;
        for(j=0;;j++) if(!S[j]){
            SG[i]=j;
            break;
        }
    }
}
int main(){
    int n,m,p;
    f[0]=f[1]=1;
    for(int i=2;i<=16;i++) f[i]=f[i-1]+f[i-2];
    while(cin>>n>>m>>p&&(n||m||p)){
        if(SG[n]^SG[m]^SG[p]) cout<<"Fibo\n";
        else cout<<"Nacci\n";
    }
    return 0;
}
