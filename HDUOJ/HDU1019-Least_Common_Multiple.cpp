#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int m,int n)
{
    if(n==0)
        return m;
    gcd(n,m%n);
}
int main()
{
    int t,n;
    long long s,k;	//���waһ�Σ���ȻҪ��long long
    cin>>t;
    while(t--)
    {
        s=1;
        cin>>n;
        while(n--)
        {
            cin>>k;
            s=(s*k)/gcd(s,k);

        }
        cout<<s<<endl;
    }
    return 0;
}
