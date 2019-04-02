#include <iostream>
#include <cstring>
#include <cstdio>
#include <set>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
const int N = 110;
using namespace std;
int main()
{
    int maxn;
    string s;
    string g="(max)";
    while(cin>>s)
    {
        maxn=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>maxn)
                maxn=s[i];
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==maxn)
                cout<<s[i]<<g;
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
