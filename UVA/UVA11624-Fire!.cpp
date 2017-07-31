//UVA11624
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

const int INF=1e9;
const int maxn=1000+10;

int R,C;
char maze[maxn][maxn];

class Cell{
public:
    int r,c;
    Cell(int x,int y):r(x),c(y){}
};

const int dr[]={-1,1,0,0};
const int dc[]={0,0,-1,1};
int d[maxn][maxn][2],vis[maxn][maxn][2];    //0=Joe,1=fire


queue<Cell> Q;
void bfs(int kind){
    while(!Q.empty()){
        Cell cell=Q.front();Q.pop();
        int x=cell.r,y=cell.c;
        for(int dir=0;dir<4;dir++){
            int dx=x+dr[dir],dy=y+dc[dir];
            if(dx>=0 && dx<R && dy>=0 && dy<C && maze[dx][dy]=='.' && !vis[dx][dy][kind]){
                Q.push(Cell(dx,dy));
                vis[dx][dy][kind]=1;
                d[dx][dy][kind]=d[x][y][kind]+1;
            }
        }
    }

}

int ans;
void check(int x,int y){
    if(maze[x][y]!='.' ||!vis[x][y][0]) return; //visit places we haven't visited.
    if(!vis[x][y][1]||d[x][y][0]<d[x][y][1])//fire is here
        ans=min(ans,d[x][y][0]+1);
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&R,&C);
        int jr,jc;
        vector<Cell> fire;
        for(int i=0;i<R;i++){
            scanf("%s",maze[i]);
            for(int j=0;j<C;j++){
                if(maze[i][j]=='J') {jr=i;jc=j;maze[i][j]='.';}
                else if(maze[i][j]=='F') { fire.push_back(Cell(i,j)); maze[i][j]='.';}
            }
        }
        memset(vis,0,sizeof(vis));
        memset(d,0,sizeof(d));

        //Joe
        vis[jr][jc][0]=1;d[jr][jc][0]=0;
        Q.push(Cell(jr,jc));
        bfs(0);

        //fire
        for(int i=0;i<fire.size();i++){
            vis[fire[i].r][fire[i].c][1]=1;
            d[fire[i].r][fire[i].c][1]=0;
            Q.push(fire[i]);
        }
        bfs(1);

        //compute the ans
        ans=INF;
        for(int i=0;i<R;i++) { check(i,0);check(i,C-1);}
        for(int i=0;i<C;i++) { check(0,i);check(R-1,i);}
        if(ans==INF) printf("IMPOSSIBLE\n"); else printf("%d\n",ans);
    }
    return 0;
}
