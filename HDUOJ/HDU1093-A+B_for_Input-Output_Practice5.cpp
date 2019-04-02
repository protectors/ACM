#include<iostream>
using namespace std;
int main()
{
    int t,n,i,a[1000],s=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
       cout<<s<<endl;
        s=0;
    }
    return 0;

}

