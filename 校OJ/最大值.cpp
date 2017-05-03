#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[100];
    gets(s);
    int i,asc=0;
    int len=strlen(s);
    for(i=0;i<len;i++)  //寻找最大asc
    {
        if(asc<s[i])
            asc=s[i];
    }
    for(i=0;i<len+1;i++) //'\0'要输出
    {
        putchar(s[i]);
        if(s[i]==asc)
            printf("find");
    }
    return 0;
}
