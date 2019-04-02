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
bool check(char *s)
{
    int i,len;
    len=strlen(s);
    if(!isalpha(s[0])&&s[0]!='_')
        return false;
    for(i=1;i<len;i++)
    {
        if(!isalnum(s[i])&&!isalpha(s[i])&&s[i]!='_')
            return false;
    }
    return true;
}
int main()
{
    char s[N];
    int t;
    scanf("%d%*c",&t);
    while(t--)
    {
        gets(s);
        if(check(s))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
