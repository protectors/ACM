#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int n,ans;
    string s;
    cin>>n;
    while(n--)
    {
        ans=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s.at(i)))
               ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
