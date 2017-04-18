//UVA458
#include <stdio.h>  
int main()  
{  
    char c;  
    while ((c = getchar()) != EOF)  
        if (c != '\n')  
            putchar(c - 7);  
        else   
            printf("\n");  
    return 0;  
}  


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0;s[i]!='\0';i++)
            s[i]-=7;
        cout<<s<<endl;
    }
    return 0;
}
