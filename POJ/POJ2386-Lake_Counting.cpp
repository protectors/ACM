#include<stdio.h>
#define MAX 110
void dfs(int x,int y);
int n,m;
char f[MAX][MAX];

void dfs(int x,int y){
    int dx,dy,nx,ny;
    f[x][y]='.';
    for(dx=-1;dx<=1;dx++) {
        for (dy = -1; dy <= 1; dy++) {
            nx = x + dx;
            ny = y + dy;
            if (nx >= 0 && ny >= 0 && nx <= n && ny <= m && f[nx][ny] == 'W') dfs(nx, ny);
        }
    }
}
int main()
{
    int i,j,ans=0;

    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        scanf(" %c",&f[i][j]);
    for(i=1;i<=n;i++) {
        for (j = 1; j <= m; j++) {
            if (f[i][j] == 'W') {
                dfs(i, j);
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}


//
//#include<stdio.h>
//#define MAX 110
//int n,m;
//char f[MAX][MAX];
//
//int d[8][2]={{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}};
//void dfs(int x,int y)
//{
//    f[x][y]='.';
//    for(int i=0;i<8;i++){
//        int dx=x+d[i][0];
//        int dy=y+d[i][1];
//        if(dx<1||dy<1||dx>n||dy>m||f[dx][dy]=='.') continue;
//        else {
//            f[dx][dy]='.';
//            dfs(dx,dy);
//        }
//    }
//
//}
//int main()
//{
//    int i,j,ans=0;
//
//    scanf("%d%d",&n,&m);
//    for(i=1;i<=n;i++)
//        for(j=1;j<=m;j++)
//        scanf(" %c",&f[i][j]);
//    for(i=1;i<=n;i++) {
//        for (j = 1; j <= m; j++)
//            if (f[i][j] == 'W') {
//                dfs(i, j);
//                ans++;
//            }
//    }
//    printf("%d\n",ans);
//    return 0;
//}


