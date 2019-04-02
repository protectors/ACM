#include<iostream>
#include<cmath>
using namespace std;
//const double PI=3.14;
int main()
{
    int t,n,i;
    double ans;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n;
        for(i=1;i<=n;i++)
            ans+=log10(i);
        cout<<(int)ans<<endl;
    }
    return 0;
}
//ans=(n*log(n) - n + 0.5*log(2*n*PI))/log(10)+1;
//神奇的数学公式