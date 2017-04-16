//UVA11292
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn=21000;
int a[maxn],b[maxn];
int main()
{
    int n,m;
    while(cin>>n>>m&&n&&m)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        int cur=0;
        int ans=0;
        for(int i=0;i<m;i++)
        {
            if(b[i]>=a[cur])
            {
                ans+=b[i];
                cur++;
                if(cur==n) break;
            }
        }
        if(cur<n) cout<<"Loowater is doomed!\n";
        else cout<<ans<<endl;
    }
    return 0;
}
