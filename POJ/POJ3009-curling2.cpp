#include <iostream>

using namespace std;

int w,h;
int sx,sy;

int mp[25][25];
int res;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x, int y, int step){
    if(step>=10) return;
    for(int i=0;i<4;i++){
        int curx=x;
        int cury=y;
        int flag=1;
        while(flag && curx>=0 && curx<h && cury>=0 && cury<w){
            switch(mp[curx][cury]){
                case 0:{
                    curx+=dx[i];
                    cury+=dy[i];
                    break;
                }
                case 3:{
                    if(step+1<res) res=step+1;
                    flag=0;
                    break;
                }
                case 1:{
                    if(!(x+dx[i]==curx&&y+dy[i]==cury)){
                        mp[curx][cury]=0;
                        dfs(curx-dx[i],cury-dy[i],step+1);
                        mp[curx][cury]=1;
                    }
                    flag=0;
                    break;
                }
                default:break;
            }
        }
    }
}

int main(){
    while(cin>>w>>h&&w&&h){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++) {
                cin >> mp[i][j];
                if(mp[i][j]==2){
                    sx=i;
                    sy=j;
                }
            }
        }

        mp[sx][sy]=0;
        res=11;
        dfs(sx,sy,0);
        if(res>10) res=-1;
        cout<<res<<endl;
    }
    return 0;
}