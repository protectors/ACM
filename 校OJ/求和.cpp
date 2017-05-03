#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[100];
    gets(s);
    int tmp,ans;
    tmp=ans=0;
    int len=strlen(s);
    for(int i=0;i<len+1;i++)    //防止最后一个是数字
    {
        if(isdigit(s[i]))
        {
            tmp=tmp*10+s[i]-'0';
        }
        else
        {
            ans+=tmp;
            tmp=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}
