#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int t,a,b,c,x,y,z,h,m,s;
    cin>>t;
    while(t--){
        h=m=s=0;
        cin>>a>>b>>c>>x>>y>>z;
        h=a+x;m=b+y;s=c+z;
        if(s>=60){
            s-=60;
            m+=1;
        }
        if(m>=60){
            m-=60;
            h+=1;
        }
        cout<<h<<" "<<m<<" "<<s<<endl;
    }
    return 0;
}