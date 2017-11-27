#include <cstdio>
#include <cstring>
int dir[4][2]={{-1,0}, {0,1}, {1,0}, {0,-1}};
char color,s[300][300];
int n,m;

void change(int &a,int &b){
    if(a>b) {int t=a;a=b;b=t;}
}

void dfs(int x,int y,char c,char precolor){
    s[x][y]=c;
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        if(dx<1 ||dx>n||dy<1 ||dy>m) continue;
        if(s[dx][dy]==precolor)
            dfs(dx,dy,c,precolor);
    }
}

int main(){
    char c,g;
    char name[20];
    int x,x1,x2,y1,y2,y;
    memset(s,0,sizeof(s));
    while(1){
        c=getchar();
        if(c=='X') break;
        //printf("c=%c\n",c);
        switch(c){
            case 'I':
                scanf("%d%d",&m,&n);
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        s[i][j]='O';
                    }
                }
                break;
            case 'C':
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        s[i][j]='O';
                    }
                }
                break;
            case 'L':
                scanf("%d%d",&x,&y);
                getchar();
                scanf("%c",&g);
                s[y][x]=g;
                break;
            case 'V':
                scanf("%d%d%d",&x,&y1,&y2);
                getchar();
                scanf("%c",&g);
                change(y1,y2);
                for(int i=y1;i<=y2;i++)
                    s[i][x]=g;
                break;
            case 'H':
                scanf("%d%d%d",&x1,&x2,&y);
                getchar();
                scanf("%c",&g);
                change(x1,x2);
                for(int i=x1;i<=x2;i++)
                    s[y][i]=g;
                break;
            case 'K':
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                getchar();
                scanf("%c",&g);
                change(x1,x2);
                change(y1,y2);
                for(int i=y1;i<=y2;i++){
                    for(int j=x1;j<=x2;j++)
                        s[i][j]=g;
                }
                break;
            case 'F':
                scanf("%d%d",&x,&y);
                getchar();
                scanf("%c",&g);
                if(g==s[y][x]) break;   //very important TLE!!
                color=s[y][x];
                dfs(y,x,g,color);
                break;
            case 'S':
                scanf("%s",name);
                printf("%s\n",name);
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        printf("%c",s[i][j]);
                    }
                    printf("\n");
                }
                break;
            default: break;
        }
    }
    return 0;
}
/*
I 5 6
L 2 3 A
S one.bmp
G 2 3 J
F 3 3 J
V 2 3 4 W
H 3 4 2 Z
S two.bmp
X
*/
