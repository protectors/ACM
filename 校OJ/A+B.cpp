#include <stdio.h>
#include <string.h>
const char* ts[]={"AM","PM"};  //С����
int main()
{
    char tm[10];
    int h,m,s,add,x,y,z,flag;
    scanf("%s %d:%d:%d",tm,&h,&m,&s);
    scanf("%d",&add);
    if(tm[0]=='A')  //�ж�����
        flag=0;
    else
        flag=1;
    x=(s+add)/60;   //60���λ
    s=(s+add)%60;
    y=(m+x)/60;     //60�ֽ�λ
    m=(m+x)%60;
    z=(h+y)/12;
    if(h==12) z--;
    h=(h+y)%12;
    if(h==0) h=12;
    flag=(flag+z)%2;
    printf("%s %02d:%02d:%02d\n",ts[flag],h,m,s);
    return 0;
}
