#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,n,i,f[55];
    while(~scanf("%d%d%d",&a,&b,&n)&&(a||b||n))
    {

        f[0]=f[1]=f[2]=1;
        for(i=3;i<=49;i++)
            f[i]=(a*f[i-1]+b*f[i-2])%7;
            printf("%d\n",f[n%49]);
    }
    return 0;

}
//开辟存储空间太大MLE,感觉题目有问题，如果是21 56 49 应当是0而非1，题目存在中间部分数列重复循环以及初始为0的情况