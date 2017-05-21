#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
void g(int t)
{
    if(t)
    {
        g((t-1)/26);
        putchar(65+(t-1)%26);
    }
}
int main()
{
    char a[100];
    int t,i,r,c,ans;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(a);
        ans=0;
        if(sscanf(a,"%*c%d%*c%d",&r,&c)==2)
        {
            g(c);
            cout<<r<<endl;
        }
        else
        {
            for(i=0;isalpha(a[i]);i++)
                ans=26*ans+a[i]-'A'+1;
            printf("R%sC%d\n",a+i,ans);
        }
    }
    return 0;
}
