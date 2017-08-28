		#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int temp,x,y,i,flag;
    while(cin>>x>>y&&(x||y))
    {
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        flag=0;
        for(i=x;i<=y;i++)
        {
            int n=i*i+i+41;
            for(int j=2;j<=int(sqrt(n));j++)
            {
                if(n%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"Sorry\n";
        else
            cout<<"OK\n";
    }
    return 0;
}
		
