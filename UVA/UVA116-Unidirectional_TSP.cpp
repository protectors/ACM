#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

const int maxn=100+10;
const int INF=1e9;
int m,n,a[maxn][maxn],d[maxn][maxn],nexts[maxn][maxn];

int main(){
    while(cin>>m>>n&&m) {
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) cin>>a[i][j];
        int ans=INF,first=0;
        for(int j=n-1;j>=0;j--){
            for(int i=0;i<m;i++){
                if(j==n-1) d[i][j]=a[i][j];
                else{
                    int rows[3]={i,i-1,i+1};
                    if(i==0) rows[1]=m-1;
                    if(i==m-1) rows[2]=0;
                    sort(rows,rows+3);
                    d[i][j]=INF;
                    for(int k=0;k<3;k++){
                        int v=d[rows[k]][j+1]+a[i][j];
                        if(v<d[i][j]) {d[i][j]=v; nexts[i][j]=rows[k]; }
                    }
                }
                if(j==0&&d[i][j]<ans) {ans=d[i][j];first=i;}
            }
        }
        printf("%d",first+1);
        for(int i=nexts[first][0],j=1;j<n;i=nexts[i][j],j++)
            printf(" %d",i+1);
        printf("\n%d\n",ans);
    }
    
    
    return 0;
}
