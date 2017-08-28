#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int i,n,a[110],ans;
    while(cin>>n)
    {
        ans=1;
        for(i=0;i<n;i++)
        {
           cin>>a[i];
           if(a[i]%2==1)
            ans*=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
