#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int i;
    char s[110];
    while(gets(s))
    {
        if(islower(s[0]))
            s[0]-=32;
        for(i=1;i<strlen(s)-1;i++)
        {
            if(s[i]==' '&&islower(s[i+1]))
                s[i+1]-=32;
        }
        puts(s);
    }
}
