#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    char s[110];
    double n,v,ans=0;
    while(scanf("%s%lf%lf",s,&n,&v)!=EOF){
        ans+=n*v;
    }
    printf("%.1lf\n",ans);
    return 0;
}
