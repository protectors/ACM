#include<iostream>
using namespace std;
int main()
{
    int a[8]={1,2,0,2,2,1,0,1};
    int n;
    while(cin>>n)
    {
        if(a[n%8]==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
