#include <iostream>
#include <cstring>
#include <cstdio>
#include <set>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
const int N = 1e5+5;
using namespace std;
int main()
{
    char s[N];
    int t,j,a,e,i,o,u;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        a=e=i=o=u=0;
        memset(s,0,sizeof(s));
        gets(s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='a')
                a++;
            if(s[j]=='e')
                e++;
            if(s[j]=='i')
                i++;
            if(s[j]=='o')
                o++;
            if(s[j]=='u')
                u++;
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
        if(t)
            printf("\n");
    }
    return 0;
}
