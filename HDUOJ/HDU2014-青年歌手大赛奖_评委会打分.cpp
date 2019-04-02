#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,minn,maxn,n;
    double k,sum;
    while(cin>>n)
    {
        minn=110;
        maxn=0;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>k;
            sum+=k;
            if(k>maxn)
                maxn=k;
            if(minn>k)
                minn=k;
        }
        sum=(sum-maxn-minn)/(n-2);
        cout<<setprecision(2)<<fixed<<sum<<endl;
    }
    return 0;
}
