#include <stdio.h>
int sum[]={100,50,10,5,2,1};
int main()
{
    int i,j,n;
    int a[110],s;
    s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<6;j++)
        {
            s+=a[i]/sum[j];
            a[i]%=sum[j];
        }
    }
    printf("%d\n",s);
    return 0;
}
