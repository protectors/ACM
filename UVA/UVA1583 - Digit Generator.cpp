//UVA1583
//runtime error 换个编译语言就过了
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <list>
using namespace std;

int ans[101000];
int main()
{

    int t,n;
    for(int m=1;m<100001;m++)
    {
        int x=m,s=m;
        while(x)
        {
            s+=x%10;
            x/=10;
        }
        if(ans[s]==0||m<ans[s])
            ans[s]=m;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
