#include <stdio.h>
#include <string.h>
const char* ts[]={"AM","PM"};  //小技巧
int main()
{
    char tm[10];
    int h,m,s,add,x,y,z,flag;
    scanf("%s %d:%d:%d",tm,&h,&m,&s);
    scanf("%d",&add);
    if(tm[0]=='A')  //判断早晚
        flag=0;
    else
        flag=1;
    x=(s+add)/60;   //60秒进位
    s=(s+add)%60;
    y=(m+x)/60;     //60分进位
    m=(m+x)%60;
    z=(h+y)/12;
    if(h==12) z--;
    h=(h+y)%12;
    if(h==0) h=12;
    flag=(flag+z)%2;
    printf("%s %02d:%02d:%02d\n",ts[flag],h,m,s);
    return 0;
}
