//CF-1A
#include<iostream>
using namespace std;
int main()
{
    long long m,n,a,i,j;
    cin>>m>>n>>a;
    i=m/a;
    j=n/a;
    if(m%a>0)
        i++;
    if(n%a>0)
        j++;
    cout<<i*j<<endl;

}

//((m+a-1)/a)*((n+a-1)/a)

