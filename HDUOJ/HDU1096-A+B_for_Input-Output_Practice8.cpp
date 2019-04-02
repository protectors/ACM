#include<iostream>
using namespace std;
int main()
{
    int s=0,t,n,i,a[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(t>=1)
        cout<<s<<endl<<endl;
        else
            cout<<s<<endl;
        s=0;

    }
    return 0;
}