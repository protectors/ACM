		#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int m,n,i,sign;
    double s;
    cin>>m;
    while(m--)
    {
        s=0;
        sign=1;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            s+=sign*1.0/i;
            sign=-sign;
        }
        cout<<setprecision(2)<<fixed<<s<<endl;
    }
    return 0;
}
