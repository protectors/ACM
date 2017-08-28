#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
                {31,29,31,30,31,30,31,31,30,31,30,31}};
    int i,year,month,day,ans,leap;
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
        ans=0;
        if((year%4==0&&year%100!=0)||(year%400==0))
            leap=1;
        else
            leap=0;
        for(i=0;i<month-1;i++)
            ans+=a[leap][i];
        ans+=day;
        cout<<ans<<endl;
    }
    return 0;
}
