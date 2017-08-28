#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,m,n,x,y;
    while(cin>>m>>n)
    {
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        x=0;y=0;
        for(i=m;i<=n;i++)
        {
            if(i%2==0)
                x+=i*i;
            else
                y+=i*i*i;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
