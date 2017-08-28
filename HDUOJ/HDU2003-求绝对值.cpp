#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double ans;
    while(cin>>ans)
        cout<<setprecision(2)<<fixed<<fabs(ans)<<endl;
    return 0;
}
