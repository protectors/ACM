//UVA133
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int n,k,m,a[30];

//逆时针走k步，步长为d（-1表示顺时针走），返回新位置
int go(int p,int d,int t)
{
    while(t--)
    {
        do { p=(p+d+n-1)%n+1; }while(a[p]==0); //走到下一个非0数字
    }
    return p;
}

int main()
{
    while(cin>>n>>k>>m&&n)
    {
        for(int i=1;i<=n;i++) a[i]=i;
        int left=n;
        int p1=n,p2=1;  //p1从1开始逆时针数时，一开始从n开始减
        while(left)
        {
            p1=go(p1,1,k);
            p2=go(p2,-1,m);
            cout.width(3);
            cout<<p1;
            left--;
            if(p1!=p2){cout.width(3);cout<<p2; left--;}
            a[p1]=a[p2]=0;
            if(left) cout<<",";
        }
        cout<<endl;
    }
    return 0;
}
