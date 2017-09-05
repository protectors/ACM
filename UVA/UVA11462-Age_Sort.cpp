#include <iostream>
#include <algorithm>
#include <cstdio>
const int maxn=2000000+10;
int a[maxn];
using namespace std;
int main(){
    int t;
    while(cin>>t&&t){
        for(int i=0;i<t;i++) scanf("%d",&a[i]);
        sort(a,a+t);
        for(int i=0;i<t;i++){
            if(i!=0) printf(" ");
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
