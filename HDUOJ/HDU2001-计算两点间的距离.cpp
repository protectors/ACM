#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float x1,y1,x2,y2,s;
    while(cin>>x1>>y1>>x2>>y2)
    {
        s=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        s=sqrt(s);
        cout<<setprecision(2)<<fixed<<s<<endl;
    }
    return 0;
}
