#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}