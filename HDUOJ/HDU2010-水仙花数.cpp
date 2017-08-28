#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int m,n,t,flag,i,a[1010],b,c,d,first;
    memset(a,0,sizeof(a));
    for(i=100;i<=999;i++)
    {
        b=i/100;
        c=i/10%10;
        d=i%10;
        if(i==b*b*b+c*c*c+d*d*d)
            a[i]=1;
    }
    while(cin>>m>>n)
    {
        flag=0;
        first=1;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        for(i=m;i<=n;i++)
        {
            if(a[i]==1)
            {
                if(first)
                    first=0;
                else
                    cout<<" ";
                flag=1;
               cout<<i;
            }
        }
        if(flag)
            cout<<endl;
        else
            cout<<"no\n";
    }
    return 0;
}
