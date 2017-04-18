//UVA445
//#define OJ
#include <cstdio>
#include <cstring>
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    #ifdef OJ
    	freopen("in.txt","r",stdin); //输入从in.txt
        freopen("out.txt","w",stdout);//输出到out.txt
    #endif
    char a[200];
    int s=0,i,len,j;
    while(gets(a))
    {
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>='0'&&a[i]<='9')
                s+=a[i]-'0';
            else
            {
                if(a[i]=='!')
                    printf("\n");
                for(j=0;j<s;j++)
                    if(a[i]=='b')
                        printf(" ");
                    else
                        printf("%c",a[i]);
                s=0;
            }
        }
        cout<<endl;
    }
    return 0;
}


//判断是否为数字，是：相加，否：输出，清零
