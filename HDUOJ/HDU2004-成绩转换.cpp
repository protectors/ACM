#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int ans;
    while(cin>>ans)
    {
        if(ans<0||ans>100)
        {
            cout<<"Score is error!\n";
            continue;
        }
        switch(ans/10)
        {
        case 10:
        case 9:cout<<"A"<<endl;break;
        case 8:cout<<"B"<<endl;break;
        case 7:cout<<"C"<<endl;break;
        case 6:cout<<"D"<<endl;break;
        default:
            cout<<"E"<<endl;
        }
    }
    return 0;
}
