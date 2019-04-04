#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
typedef long long  ll;
const int maxn=1005;
int main(){
    ll n,flag,s[maxn];
    while(scanf("%lld",&n)!=EOF){
        if(n==0){
            printf("0\n");
            continue;
        }
        int i=flag=0;
        memset(s,0,sizeof(s));
        while(n){
            s[i]=n%2;
            if(n<0) s[i]=-s[i];
            n-=s[i];
            n/=-2;
            i++;
        }
        flag=i;
        for(int i=0;i<flag/2;i++) swap(s[i],s[flag-1-i]);
        for(int i=0;i<flag;i++) printf("%lld",s[i]);
        printf("\n");
    }
    return 0;
}
