# include <iostream>
#include <cstdio>
# define N 31
using namespace std;

int main()
{
    int n,i,j,a[N][N]={0};
    for(i=1;i<N;i++)
        a[i][i]=1,a[i][1]=1;
    for(i=3;i<N;i++)
        for(j=2;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    while(cin>>n)
    {
      for(i=1;i<=n;i++) //´òÓ¡
      {
        for(j=1;j<=i;j++)
            printf(j==i?"%d\n":"%d ",a[i][j]);
      }
      cout<<endl;
    }

    return 0;
}
