#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int i,n,m,a[100];
    while(cin>>n>>m&&(n||m))
    {
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
            cin>>a[i];
        a[i]=m;
        sort(a,a+n+1);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<a[i]<<endl;
    }
    return 0;
}
