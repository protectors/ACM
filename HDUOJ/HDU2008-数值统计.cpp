#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int i,n,a,b,c;
    double k;
    while(cin>>n&&n)
    {
        a=b=c=0;
        for(i=1;i<=n;i++)
        {
            cin>>k;
            if(k<0)
                a++;
            else if(k==0)
                b++;
            else
                c++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
