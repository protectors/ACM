#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int p[]={2,3,5,7,11,13,17,19,23,29,31,37};
bool isprime[40];
bool used[21];
int num[21],n;
bool dfs(int count,int cur){
    num[count]=cur;
    if(count==n-1){
        if(!isprime[cur+1]) return false;
        for(int i=0;i<n-1;i++) cout<<num[i]<<" ";
        cout<<num[n-1]<<endl;
        return false;
    }
    for(int i=2;i<=n;i++){
        if(used[i]) continue;
        used[i]=true;
        if(isprime[cur+i]&&dfs(count+1,i)) return true;
        used[i]=false;
    }
    return false;
}
int main(){
    memset(isprime,false,sizeof(isprime));
    for(int i=0;i<12;i++) isprime[p[i]]=true;
    int kase=1;
    while(cin>>n){
        cout<<"Case "<<kase++<<":"<<endl;
        memset(used, false, sizeof(used));
        used[1]=true;
        dfs(0,1);
        cout<<endl;
    }
    return 0;
}

