#include<iostream>
#include<cstdio>
using namespace std;
//判断两数是否互质
int gcd(int m,int n)
{
    return n==0?m:gcd(n,m%n);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(gcd(a,b)==1)
            printf("%10d%10d    Good Choice\n\n",a,b);
        else
            printf("%10d%10d    Bad Choice\n\n",a,b);
    }
    return 0;
}
