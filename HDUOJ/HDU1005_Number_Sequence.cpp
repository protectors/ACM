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
//���ٴ洢�ռ�̫��MLE,�о���Ŀ�����⣬�����21 56 49 Ӧ����0����1����Ŀ�����м䲿�������ظ�ѭ���Լ���ʼΪ0�����