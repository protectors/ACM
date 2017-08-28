		#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int i,n,ans;
    while(cin>>n)
    {
        ans=1;
        for(i=1;i<n;i++)
        {
            ans=(ans+1)*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
