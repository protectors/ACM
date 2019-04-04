#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
typedef long long  ll;
const int maxn=550;
char s[maxn],d[maxn];
int t[maxn],A[maxn];
int k,i,l,T,a,b;
int main(){
    for(scanf("%d",&T);T--;){
        scanf("%d%d%s",&a,&b,s);
        for(k=i=strlen(s);0<i--;)
            t[k-1-i]=s[i]-(s[i]<58?48:s[i]<97?55:61);
        for(l=0;k;){
            for(i=k;1<i--;){
                t[i-1]+=t[i]%b*a;
                t[i]/=b;
            }
            A[l++]=t[0]%b;
            t[0]/=b;
            for(;0<k&&!t[k-1];k--);
        }
        for(d[l]=i=0;i<l;i++)
            d[l-1-i]=A[i]+(A[i]<10?48:A[i]<36?55:61);
        printf("%d %s\n%d %s\n\n",a,s,b,d);
    }
    return 0;
}
