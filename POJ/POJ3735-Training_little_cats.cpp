#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long  ll;
const int maxn=105;
struct mat{
    ll v[maxn][maxn];
    mat(){memset(v,0,sizeof(v));}
};
mat e,ans;
int n,m,k;
mat mat_mul(mat p1,mat p2){
    mat t;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(p1.v[i][j]){
                for(k=0;k<=n;k++)
                    t.v[i][k]+=(p1.v[i][j]*p2.v[j][k]);
            }
        }
    }
    return t;
}
mat mat_mi(mat p,int k){
    mat t;
    for(int i=0;i<=n;i++) t.v[i][i]=1;
    while(k){
        if(k&1) t=mat_mul(t,p);
        k>>=1;
        p=mat_mul(p,p);
    }
    return t;
}
void init(){
    int x,y;
    char w[5];
    memset(e.v,0,sizeof(e.v));
    for(int i=0;i<=n;i++) e.v[i][i]=1;
    while(k--){
        scanf("%s",w);
        if(w[0]=='g'){
            scanf("%d",&x);
            x--;
            e.v[n][x]++;
        }
        else if(w[0]=='s'){
            scanf("%d%d",&x,&y);
            x--; y--;
            if(x!=y){
                for(int i=0;i<=n;i++){
                    ll t=e.v[i][x];
                    e.v[i][x]=e.v[i][y];
                    e.v[i][y]=t;
                }
            }
        }
        else{
            scanf("%d",&x);
            x--;
            for(int i=0;i<=n;i++) e.v[i][x]=0;
        }
    }
}
int main(){
    while(scanf("%d %d %d",&n,&m,&k)!=EOF){
        if(n==0&&m==0&&k==0) break;
        init();
        ans=mat_mi(e,m);
        for(int i=0;i<n;i++)
            printf("%lld ",ans.v[n][i]);
        printf("\n");
    }
    return 0;
}
