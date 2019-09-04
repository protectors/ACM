#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,a,b,c,k=1;
        while(cin>>n>>m&&n||m)
        {
            c=0;
            for(a=1;a<n-1;a++)
                for(b=a+1;b<n;b++)
                {
                    if((a*a+b*b+m)%(a*b)==0)
                        c++;
                }
            cout<<"Case "<<k++<<": "<<c<<endl;
        }
        if(t)
            cout<<endl;
    }
    return 0;
}