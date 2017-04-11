//UVA10082
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <map>
using namespace std;


int main()
{
    char s[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    int i,c;
    while((c=getchar())!=EOF)
    {
        for(i=1;s[i]&&s[i]!=c;i++);
        if(s[i])
            putchar(s[i-1]);
        else
            putchar(c);

    }
    return 0;
}
