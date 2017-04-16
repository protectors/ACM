//UVA1339
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a,b;
    int c1[30],c2[30];
    while(cin>>a>>b)
    {
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        for(int i=0;i<a.size();i++)
        {
            c1[a[i]-'A']++;
        }
        for(int i=0;i<b.size();i++)
        {
            c2[b[i]-'A']++;
        }
        sort(c1,c1+26);
        sort(c2,c2+26);
        int flag=1;
        if(a.size()!=b.size())
            flag=0;
        for(int i=0;i<26;i++)
        {
            if(c1[i]!=c2[i])
                flag=0;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

