#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn=110;
struct dot{
    int x,y;
}p[maxn];
int main(){
    int n;
    while(cin>>n&&n){
        for(int i=0;i<n;i++) cin>>p[i].x>>p[i].y;
        double s=0;
        for(int i=0;i<n;i++){
            s+=((double)p[i].x*p[(i+1)%n].y-(double)p[(i+1)%n].x*p[i].y)/2.0;
            s=fabs(s);
        }
        cout<<setprecision(1)<<fixed<<s<<endl;
    }
    return 0;
}
