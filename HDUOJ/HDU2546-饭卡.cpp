#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

const int maxn=1100;

int price[maxn],dp[maxn];

int main(){
    int m,n;
    while(cin>>n&&n){
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++) cin>>price[i];
        cin>>m;
        if(m<5) {
            cout<<m<<endl;
            //continue; 有毒的continue
        }
        else{
            sort(price,price+n);
            //for(int i=0;i<n;i++) cout<<price[i]<<" ";
            m-=5;
            for(int i=0;i<n-1;i++){
                for(int j=m;j>=price[i];j--){
                    dp[j]=max(dp[j],dp[j-price[i]]+price[i]);
                }
            }
            cout<<m+5-dp[m]-price[n-1]<<endl;
        }
    }
    return 0;
}
