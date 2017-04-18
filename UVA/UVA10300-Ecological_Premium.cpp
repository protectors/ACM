#include<iostream>

using namespace std;
int main()
{
    int n,f;
    long long s,a,b,c;
    cin>>n;
    while(n--)
    {
        s=0;
        cin>>f;
        while(f--)
        {
            cin>>a>>b>>c;
            s+=a*c;
        }
        cout<<s<<endl;
    }

    return 0;
}
