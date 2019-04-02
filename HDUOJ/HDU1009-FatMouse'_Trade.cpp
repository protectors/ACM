#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
struct food{
    double j,f,v;
}a[1100];
bool cmp(struct food a,struct food b){
    return a.v>b.v;
}
int main(){
    int m,n;
    while(scanf("%d%d",&m,&n),m!=-1||n!=-1){
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            scanf("%lf%lf",&a[i].j,&a[i].f);
            a[i].v=a[i].j/a[i].f;
        }
        sort(a,a+n,cmp);
        double ans=0;
        for(int i=0;i<n;i++){
            if(m>=a[i].f){
                m-=a[i].f;
                ans+=a[i].j;
            }
            else{
                ans+=a[i].v*m;
                break;            //当食物不够后，跳出
            }
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
