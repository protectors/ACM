#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int const maxn=110;
struct dot{
    int s,e;
}a[maxn];
bool cmp(struct dot a,struct dot b){
    return a.e<b.e;
}
int main(){
    int n,s,t;
    while(cin>>n&&n){
        for(int i=0;i<n;i++)
            cin>>a[i].s>>a[i].e;
        sort(a,a+n,cmp);
        s=0,t=0;
        for(int i=0;i<n;i++){
            if(a[t].e<=a[i].s){
                s++; t=i;
            }
        }
        if(t<n) s++;
        cout<<s<<endl;
    }
    return 0;
}
