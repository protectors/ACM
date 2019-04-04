#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int inf=10001;
const int maxn=1005;
int bs(int s[],int d,int len){
    int l=0,r=len,mid;
    while(l!=r){
        mid=(l+r)>>1;
        if(d==s[mid]) return mid;
        else if(d<s[mid]) r=mid;
        else l=mid+1;
    }
    return l;
}
int a[maxn],s[maxn];
int main(){
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>a[i];
        s[0]=-1;
        int len=1;
        for(int i=1;i<=n;i++){
            s[len]=inf;
            int j=bs(s,a[i],len);
            if(j==len) len++;
            s[j]=a[i];
        }
        printf("%d\n",len-1);
    }
    return 0;
}
