#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int a[100][100];
int main()
{
    int n,m,i,j,x,y,maxn;
    while(cin>>m>>n)		//多组测试数据，尴尬
    {
        x=y=1;
        maxn=0;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>a[i][j];
                if(abs(maxn)<abs(a[i][j]))
                {
                    maxn=a[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        cout<<x<<" "<<y<<" "<<a[x][y]<<endl;
    }
    return 0;
}
