#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int n,d,u;
    while(cin>>n>>u>>d,n||u||d){
        int s=0,ans=0;
        while(s+u<n){
            ans+=2;     //爬上去和滑下来共2min
            s+=u-d;     //所处的位置
        }
        ans++;          //最后一跳也算1min
        cout<<ans<<endl;
    }
    return 0;
}
