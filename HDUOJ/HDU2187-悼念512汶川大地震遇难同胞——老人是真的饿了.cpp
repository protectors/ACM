#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Mi{
    int p,h;
    operator <(struct Mi b){
        return p<b.p;
    }
}a[1100];

int main(){
    int t,m,n;
    cin>>t;
    while(t--){
       cin>>n>>m;
       for(int i=0;i<m;i++){
            cin>>a[i].p>>a[i].h;
       }
       sort(a,a+m);

       //for(int i=0;i<m;i++) cout<<a[i].p<<" "<<a[i].h<<endl;
       double g,s=0;
       for(int i=0;n>0;i++){
            if(a[i].p*a[i].h>n){
                g=(double)n/a[i].p;
                s+=g;
                n-=a[i].p*g;
            }
            else{
                g=a[i].h;
                s+=g;
                n-=a[i].p*g;
            }
       }
       printf("%.2lf\n",s);
    }
    return 0;
}
