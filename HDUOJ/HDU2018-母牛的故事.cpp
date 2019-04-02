#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int n,a[100];
    a[0]=a[1]=1;
    a[2]=2;
    a[3]=3;
    for(int i=4;i<100;i++)
        a[i]=a[i-1]+a[i-3];
    while(cin>>n&&n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
