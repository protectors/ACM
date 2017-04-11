//UVA1584
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

const int maxn=105;
int les(const char* s,int p,int q)
{
    int n=strlen(s);
    for(int i=0;i<n;i++)
        if(s[(p+i)%n]!=s[(q+i)%n])
            return s[(p+i)%n]<s[(q+i)%n];
    return 0;
}

int main()
{
    int t;
    char s[maxn];
    cin>>t;
    while(t--)
    {
        cin>>s;
        int ans=0;
        int n=strlen(s);
        for(int i=1;i<n;i++)
            if(les(s,i,ans))
                ans=i;
        for(int i=0;i<n;i++)
            putchar(s[(i+ans)%n]);
        putchar('\n');
    }
    return 0;
}
