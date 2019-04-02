#include<iostream>
using namespace std;
int main()
{
    int a[1000],s=0,n,i;
    while(cin>>n&&n!=0)
    {
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
