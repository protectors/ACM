#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int minn,a[101],n,t,i,temp;
    while(cin>>n&&n)
    {
        minn=999999;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(minn>a[i])
            {
                minn=a[i];
                t=i;
            }
        }
        swap(a[0],a[t]);
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<a[i]<<endl;
    }
    return 0;
}
