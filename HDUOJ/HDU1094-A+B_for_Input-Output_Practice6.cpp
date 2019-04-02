#include<iostream>
using namespace std;
int main()
{
    int n,i,t,s=0;
    while(cin>>n)
    {

        for(i=0;i<n;i++)
        {
            cin>>t;
            s+=t;
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;

}
