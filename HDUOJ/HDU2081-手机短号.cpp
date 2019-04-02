#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int t;
    char s[15];
    cin>>t;
    while(t--){
        scanf("%s",s);
        printf("6%s\n",s+6);
    }
    return 0;
}