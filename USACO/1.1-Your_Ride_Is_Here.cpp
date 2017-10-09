/*
ID:zfprote2
PROG:ride
LANG:C++
*/
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char a[30],b[30];
    int m=1,n=1;
    scanf("%s%s",a,b);
    for(int i=0;i<strlen(a);++i)
    {
        m*=a[i]-'A'+1;
    }
    for(int i=0;i<strlen(b);++i)
    {
        n*=b[i]-'A'+1;
    }
    if(m%47==n%47)
        cout<<"GO"<<endl;
    else
        cout<<"STAY"<<endl;

    return 0;
}
