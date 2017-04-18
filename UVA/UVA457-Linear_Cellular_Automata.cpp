//UVA457
//#define OJ
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int s[55][55];
void print()
{
    int i,j;
    for(i=1;i<=50;i++)
    {
        for(j=1;j<=40;j++)
        {
            switch(s[i][j])
            {
                case 0:printf(" ");break;
                case 1:printf(".");break;
                case 2:printf("x");break;
                case 3:printf("W");break;
            }
        }
        printf("\n");
    }
}
int main()
{
    #ifdef OJ
    	freopen("in.txt","r",stdin); //输入从in.txt
        freopen("out.txt","w",stdout);//输出到out.txt
    #endif

    int t,a[10],i,j,temp;
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
            cin>>a[i];
        memset(s,0,sizeof(s));
        s[1][20]=1;
        for(i=2;i<=50;i++)
        {
            for(j=1;j<=40;j++)
            {
                temp=s[i-1][j-1]+s[i-1][j]+s[i-1][j+1];
                s[i][j]=a[temp];
            }
        }
        print();
        if(t)
            cout<<endl;
    }
    return 0;
}
//考虑到第一个位置也要代入公式计算时计数应从1开始计数（而不是从0）
