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
int a[N][N];
int main()
{
    int n,m,i,j,kount;
    double sum,temp[N];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                sum+=a[i][j];
            }
            if(i!=0)
                printf(" ");
            printf("%.2lf",sum/m);
        }
        printf("\n");
        memset(temp,0,sizeof(temp));
        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                temp[j]+=a[i][j];
            }
            temp[j]=temp[j]/n;
            if(j!=0)
                printf(" ");
            printf("%.2lf",temp[j]);
        }
        printf("\n");
        kount=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]<temp[j])
                {
                    kount--;
                    break;
                }
            }
        }
        printf("%d\n\n",kount);
    }
    return 0;
}


//晕死，格式PE错了3次