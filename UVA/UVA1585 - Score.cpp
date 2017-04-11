//UVA1585
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <list>
#include <cstring>
using namespace std;

int main()
{
    int t,n,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ans=0;
        n=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='O')
            {
                ans+=n;
                if(s[i+1]=='O')
                {
                    n++;
                    continue;
                }

            }
            else
                n=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
