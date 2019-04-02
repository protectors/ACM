#include <iostream>
#include <cstdio>
using namespace std;
int s[110];
int main(){
    int a,b,t;
    while(scanf("%d%d",&a,&b),a|b){
        t=0;
        a=a*100;
        for(int i=a;i<=a+99;i++){
            if(i%b==0) s[t++]=i%100;
        }
        for(int i=0;i<t;i++){
            printf("%02d",s[i]);
            if(i!=t-1)  //末尾无空格
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
