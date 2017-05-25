#include <cstdio>
#include <cstring>
#include <cmath>
#define inf 0x7fffffff
using namespace std;

int f[1001][1001][2],n,x,t;
char g[1001][1001][2];

void print(int x,int y){
    if(x==1&&y==1)
        return ;
    if(g[x][y][t])
        print(x-1,y),putchar('D');
    else
        print(x,y-1),putchar('R');
}

int main(void){
    scanf("%d",&n);
    memset(f,0,sizeof(f));
    for(int i=2;i<=n;++i)
        f[0][i][0]=f[0][i][1]=f[i][0][0]=f[i][0][1]=inf;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            scanf("%d",&t);
            if(!t) x=i;     //判断0在第x行
            else{
                while(t%2==0) ++f[i][j][0],t/=2;
                while(t%5==0) ++f[i][j][1],t/=5;
            }
            for(int k=0;k<2;k++)
                if((g[i][j][k]=f[i-1][j][k]<f[i][j-1][k]))
                    f[i][j][k]+=f[i-1][j][k];
                else f[i][j][k]+=f[i][j-1][k];
        }
    }
    t=f[n][n][1]<f[n][n][0];
    if(x&&f[n][n][t]>1){        //有0的那行特判
        puts("1");
        for(int i=2;i<=x;i++) putchar('D');
        for(int i=2;i<=n;i++) putchar('R');
        for(int i=x+1;i<=n;i++) putchar('D');
        puts("");
    }
    else
        printf("%d\n",f[n][n][t]),print(n,n);
    puts("");
}

