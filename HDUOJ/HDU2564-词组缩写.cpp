#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    char s[150];
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(s);
        int len=strlen(s),i=0;
        while(s[i]==' ') i++;   //开始存在空格
        putchar(toupper(s[i]));
        for(;i<len;i++){
            if(s[i]==' '&&isalpha(s[i+1])){
                s[i+1]=toupper(s[i+1]);
                putchar(s[i+1]);
            }
        }
        printf("\n");
    }
    return 0;
}
