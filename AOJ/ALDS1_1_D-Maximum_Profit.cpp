#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int N =200000+5;
int a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxv=-2e9;
    int minv=a[0];
    for(int i=1;i<n;i++)
    {
        maxv=max(maxv,a[i]-minv);
        minv=min(minv,a[i]);
    }
    cout<<maxv<<endl;
    return 0;
}