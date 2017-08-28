#include<iostream>
#include<iomanip>
#include<cmath>
#define PI 3.1415927
using namespace std;
int main()
{
    double r,v;
    while(cin>>r)
    {
        v=4.0/3.0*PI*r*r*r;
        cout<<setprecision(3)<<fixed<<v<<endl;
    }
    return 0;
}
