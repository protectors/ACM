#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int m,i;
    double n,s;
    while(cin>>n>>m)
    {
        s=0;
        for(i=1;i<=m;i++)
        {
            s+=n;
            n=sqrt(n);
        }
        cout<<setprecision(2)<<fixed<<s<<endl;
    }
    return 0;
}
