#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int maxn=50005;
int a[maxn];
int l[maxn],r[maxn];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf(" %d",&a[i]);
        l[0]=a[0];
        for(int i=1;i<n;i++){
            if(l[i-1]<0) l[i]=a[i];
            else l[i]=l[i-1]+a[i];
        }
        for(int i=1;i<n;i++){
            l[i]=max(l[i],l[i-1]);
        }
        r[n-1]=a[n-1];
        for(int j=n-2;j>=0;j--){
            if(r[j+1]<0) r[j]=a[j];
            else r[j]=r[j+1]+a[j];
        }
        for(int i=n-2;i>=0;i--)
            r[i]=max(r[i+1],r[i]);
        int res=-1000000;
        for(int i=1;i<n;i++)
            res=max(res,l[i-1]+r[i]);
        printf("%d\n",res);
    }
    return 0;
}
