#include <iostream>
#include <cstdio>
#include <cstring>
//一个汉字在字符串中是以两个负的字符形式存储
using namespace std;
int main(){
    int t,ans;
    char s[1100];
    while(scanf("%d",&t)!=EOF){
        getchar();
        while(t--){
            ans=0;
            memset(s,0,sizeof(s));
            gets(s);
            int len=strlen(s);
            for(int i=0;i<len;i++){
                if(s[i]<0)
                    ans++;
            }
            cout<<ans/2<<endl;
        }
    }
    return 0;
}