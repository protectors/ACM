#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        double ans=0.0;
        for(int i=1;i<n;i++){
            double pos=(double)i/n*(n+m);   //把数轴总长度n扩大到n+m
            ans+=fabs(pos-floor(pos+0.5))/(n+m);    //缩小回去
        }
        printf("%.4lf\n",ans*10000);
    }
    return 0;
}