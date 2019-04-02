#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(int a,int b)
{
    return fabs(a)>fabs(b);
}
int main()
{
    int i,n,a[110];
    while(cin>>n&&n)
    {
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,cmp);
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<a[i]<<endl;
    }
    return 0;
}
