//UVA488
#include <iostream>
using namespace std;
int main()
{
    int t,a,f,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>f;
        while(f--)
        {
           for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                cout<<i;
                cout<<endl;
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                cout<<i;
                cout<<endl;
            }
            if(f)
                cout<<endl;
        }
        if(t)
            cout<<endl;      //最后一行不输出空格
    }
    return 0;
}
