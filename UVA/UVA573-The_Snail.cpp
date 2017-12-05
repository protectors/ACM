#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int h,d,day,ok;
    char a[2][10]={"failure","success"};
    double s,u,f,t;
    while(cin>>h>>u>>d>>f&&h){
        s=0;ok=1;
        t=f*0.01*u;
        for(day=1;;day++){
            s+=u;
            if(u>0) u-=t;
            else u=0;
            if(s>h) break;
            s-=d;
            if(s<0){
                ok=0;
                break;
            }
            //cout<<s<<endl;
        }

        cout<<a[ok]<<" on day "<<day<<endl;
    }
    return 0;
}

