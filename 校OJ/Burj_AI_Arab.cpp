#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
struct room
{
    int g,s,t;
}f[1100];
int cmp(room a,room b)
{
    return a.t<b.t;
}
int main()
{
    int i,j,n,a,b,c,tmp,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        f[i].g=a;
        f[i].s=b;
        f[i].t=b+c;
    }
    sort(f,f+n,cmp);
    for(i=0;i<n;i++)
    {
        tmp=0;
        for(j=i;j<n;j++)
        {
            if(f[i].t>f[j].s)
                tmp+=f[j].g;
        }
        ans=ans>tmp?ans:tmp;
    }
    printf("%d\n",ans);
    return 0;
}
