//输入一开始就会说有N个Input Block,下面接着是N个Input Block。
#include<iostream>
using namespace std;

int main()
{
    int a,b,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<a+b<<endl;
    }

    return 0;
}
