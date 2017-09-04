#include <iostream>
#include <cstdio>
using namespace std;

int fun(int x){
    int s=0;
    while(x){
       s+=x%10;
       x/=10;
    }
    if(s<10) return s;
    else return fun(s);
}
int main(){
    int n,ans;
    while(scanf("%d",&n)==1&&n){
        ans=fun(n);
        printf("%d\n",ans);
    }
    return 0;
}
