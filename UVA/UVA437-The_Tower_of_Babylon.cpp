#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=30+5;
int n,block[maxn][3],d[maxn][3];

void fun(int* v,int b,int dim){
    int idx=0;
    for(int i=0;i<3;i++)
        if(i!=dim) v[idx++]=block[b][i];
}

int dp(int i,int j){
    int& ans=d[i][j];
    if(ans>0) return ans;
    ans=0;
    int v[2],v1[2];
    fun(v,i,j);
    for(int a=0;a<n;a++){
        for(int b=0;b<3;b++){
            fun(v1,a,b);
            if(v1[0]<v[0] &&v1[1]<v[1])
                ans=max(ans,dp(a,b));
        }
    }
    ans+=block[i][j];
    return ans;
}

int main(){
    int kase=0;
    while(cin>>n&&n){
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++) cin>>block[i][j];
            sort(block[i],block[i]+3);
        }
        memset(d,0,sizeof(d));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                //cout<<dp(i,j)<<endl;
                ans=max(ans,dp(i,j));
            }
        }
        printf("Case %d: maximum height = %d\n",++kase,ans);
    }
    return 0;
}

