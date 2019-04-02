#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,m,i;
    double ans;
    while(cin>>n>>m)
    {
        ans=0;
        i=0;
        while(n>m)
        {
            ans=m*(2*i+1)+1;    //首项为m+1，公差为2*m
            cout<<ans<<" ";
            i++;
            n-=m;
        }
        ans=2*m*i+n+1;
        cout<<ans<<endl;
    }
    return 0;
}
