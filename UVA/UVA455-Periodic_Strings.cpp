//UVA455
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
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len=s.size(),ok;
        for(int i=1;i<=len;i++)
        {
            if(len%i==0)
            {
                ok=1;
                for(int j=i;j<len;j++)
                    if(s[j]!=s[j%i])
                    {
                        ok=0;
                        break;
                    }
                if(ok)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        if(t)
            cout<<endl;
    }
    return 0;
}
