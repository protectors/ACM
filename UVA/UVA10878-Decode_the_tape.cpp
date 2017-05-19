//UVA10878
//C++5.3.0不支持gets()
//#define OJ
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    #ifdef OJ
    	freopen("in.txt","r",stdin); //输入从in.txt
        freopen("out.txt","w",stdout);//输出到out.txt
    #endif
    char a[]={0,0,64,32,16,8,0,4,2,1,0};
    char s[30];
    int ans;
    gets(s);
    while(gets(s)&&s[0]!='_')
    {
        ans=0;
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='o')
                ans+=a[i];
        }
        printf("%c",ans);
    }
    return 0;
}
/*测试数据
___________ 
| o   .  o| 
|  o  .   | 
| ooo .  o| 
| ooo .o o| 
| oo o.  o| 
| oo  . oo| 
| oo o. oo| 
|  o  .   | 
| oo  . o | 
| ooo . o | 
| oo o.ooo| 
| ooo .ooo| 
| oo o.oo | 
|  o  .   | 
| oo  .oo | 
| oo o.ooo| 
| oooo.   | 
|  o  .   | 
| oo o. o | 
| ooo .o o| 
| oo o.o o| 
| ooo .   | 
| ooo . oo| 
|  o  .   | 
| oo o.ooo| 
| ooo .oo | 
| oo  .o o| 
| ooo . o | 
|  o  .   | 
| ooo .o  | 
| oo o.   | 
| oo  .o o| 
|  o  .   | 
| oo o.o  | 
| oo  .  o| 
| oooo. o | 
| oooo.  o| 
|  o  .   | 
| oo  .o  | 
| oo o.ooo| 
| oo  .ooo| 
|  o o.oo | 
|    o. o | 
___________ */
