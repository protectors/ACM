//UVA272
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int c,q=1;
    while((c=getchar())!=EOF)
    {
        if(c=='"')
        {
            printf("%s",q?"``":"''");
            q=!q;
        }
        else
            putchar(c);
    }
    return 0;
}
