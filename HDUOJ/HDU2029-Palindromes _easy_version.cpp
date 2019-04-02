#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool fun(char *s){
    int len=strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]) return false;
    }
    return true;
}
int main(){
    int t;
    char s[110];
    cin>>t;
    while(t--){
        scanf("%s",s);
        if(fun(s))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}