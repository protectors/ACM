#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

const int maxn=10000;
int main()
{
    int n,q,i,x,kase=0,a[maxn];
    while(cin>>n>>q&&n)
    {
        cout<<"CASE# "<<++kase<<":\n";
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        while(q--)
        {
            cin>>x;
            int p=lower_bound(a,a+n,x)-a;
            if(a[p]==x)
                cout<<x<<" found at "<<p+1<<endl;
            else
                cout<<x<<" not found"<<endl;
        }
    }
    return 0;
}
