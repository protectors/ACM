#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
int main(){
    int n;
    //负数取反操作等于正数取反+1再取反
    while (cin>>n) {
        getchar();
        while(n--){
            char s[1010]="";
            gets(s);
            int i,j,flag=0;
            for(i=0;i<strlen(s);i++){
                if(s[i]==' '){
                    for(j=i-1;j>=flag;j--) putchar(s[j]);
                    printf(" ");
                    flag=i+1;
                }
            }
            for(j=i-1;j>=flag;j--) putchar(s[j]);
            printf("\n");
        }
    }
    return 0;
}
