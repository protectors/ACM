#include <iostream>
#include <cstring>

using namespace std;

int flag;
int f[11];

void dfs(int step, int l,int r){
    if(step>=11) {
        flag=1;
        return;
    }
    if(f[step]>l) dfs(step+1,f[step],r);
    else if(f[step]>r) dfs(step+1,l, f[step]);
    else flag=0;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(f,0,sizeof(f));
        for(int i=1;i<=10;i++) cin>>f[i];
        flag=0;
        dfs(1,0,0);
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}