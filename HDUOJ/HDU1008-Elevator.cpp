#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,p,s,a[110];
    while(cin>>n&&n)
    {
        s=0;p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(p<a[i])
            {
                s+=6*(a[i]-p);
                p=a[i];
            }
            else
            {
                s+=4*(p-a[i]);
                p=a[i];
            }
            s+=5;
        }
        cout<<s<<endl;
    }
    return 0;

}