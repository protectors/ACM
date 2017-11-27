#include <iostream>
using namespace std;
int main(){
    int a,b,t;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        if(a>b) swap(a,b);
        int c,maxn=-1;
        for(int i=a;i<=b;i++){
            t=i;
            c=1;
            while(t>1){
                if(t&1) t=3*t+1;
                else t/=2;
                c++;
            }
            maxn=max(maxn,c);
        }
        cout<<maxn<<endl;
    }
    return 0;
}
