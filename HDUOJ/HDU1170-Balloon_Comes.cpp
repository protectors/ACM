#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    int n,a,b;
    double ans;
    char s[10];
    scanf("%d",&n);
    getchar();
    while(n--){
        scanf("%s%d%d",s,&a,&b);
        if(strcmp(s,"+")==0)
            printf("%d\n",a+b);
        if(strcmp(s,"-")==0)
            printf("%d\n",a-b);
        if(strcmp(s,"*")==0)
            printf("%d\n",a*b);
        if(strcmp(s,"/")==0&&a%b!=0)
            printf("%.2lf\n",1.0*a/b);
        else if(strcmp(s,"/")==0&&a%b==0)
            printf("%d\n",a/b);
    }
    return 0;
}
