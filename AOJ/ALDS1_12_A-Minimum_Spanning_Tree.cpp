#include <iostream>
using namespace std;

const int MAX=110;
const int INFTY=1<<21;
const int WHITE=0;
const int GRAY=1;
const int BLACK=2;

int n,m[MAX][MAX];

int prim(){
    int u,minv;
    int d[MAX],p[MAX],color[MAX];

    for(int i=0;i<n;i++){
        d[i]=INFTY;
        p[i]=-1;
        color[i]=WHITE;
    }

    d[0]=0;
    while(true){
        minv=INFTY;
        u=-1;
        for(int i=0;i<n;i++){
            if(minv>d[i] && color[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }

        if(u==-1)break;
        color[u]=BLACK;
        for(int v=0;v<n;v++){
            if(color[v]!=BLACK && m[u][v]!=INFTY){
                if(d[v]>m[u][v]){
                    d[v]=m[u][v];
                    p[v]=u;
                    color[v]=GRAY;
                }
            }
        }
    }

    int sum=0;
    for(int i=0;i<n;i++){
        if(p[i]!=-1) sum+=m[i][p[i]];
    }
    return sum;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            m[i][j]=(e==-1)?INFTY:e;
        }
    }

    cout<<prim()<<endl;
    return 0;
}