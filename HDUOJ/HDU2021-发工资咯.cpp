#include <iostream>
using namespace std;
int main()
{
    int i,ans,n,k;
    while(cin>>n&&n)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
           cin>>k;
           ans+=k/100;
           k%=100;
           ans+=k/50;
           k%=50;
           ans+=k/10;
           k%=10;
           ans+=k/5;
           k%=5;
           ans+=k/2;
           k%=2;
           ans+=k;
        }
        cout<<ans<<endl;
    }
}
