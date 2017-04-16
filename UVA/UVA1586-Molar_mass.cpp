//UVA1586
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
    int t,n,i;
    double ans;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        ans=0;
        cin>>s;
        for(i=0;s[i];i++)
        {
            if(isdigit(s[i+1]))
            {
                n=s[i+1]-'0';
               if(isdigit(s[i+2]))
                    n=10*(s[i+1]-'0')+s[i+2]-'0';
            }
            else
                n=1;
            if(s[i]=='C')ans+=12.01*n;
            if(s[i]=='N')ans+=14.01*n;
            if(s[i]=='O')ans+=16.00*n;
            if(s[i]=='H')ans+=1.008*n;
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
