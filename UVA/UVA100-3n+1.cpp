//UVA100
#include<stdio.h>
int main()
{
    int p,i,j,k,n,max,c;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        printf("%d %d ",i,j);
        max=-1;
        c=1;
        if(i>j)
        {
            p=i;
            i=j;
            j=p;
        }
        for(k=i;k<=j;k++)
        {
            n=k;
            while(n>1)
            {
                if(n%2==1)
                    n=n*3+1;
                else
                    n=n/2;
                c++;
            }
            if(c>max)
                max=c;
            c=1;
        }
    printf("%d\n",max);
    }
    return 0;
}
