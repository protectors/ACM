#include<iostream>
using namespace std;
int main()
{
    int n,i,s;
    while(cin>>n)
        {
            s=0;
            for(i=1;i<=n;i++)
                s+=i;
           cout<<s<<endl<<endl;
        }
    return 0;
}
