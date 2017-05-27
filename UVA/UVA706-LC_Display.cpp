#include <cstdio>
#include <cstring>
int s,n;
char p[10][5][3]=
{//0
    ' ','-',' ',
    '|',' ','|',
    ' ',' ',' ',
    '|',' ','|',
    ' ','-',' ',
//1
    ' ',' ',' ',
    ' ',' ','|',
    ' ',' ',' ',
    ' ',' ','|',
    ' ',' ',' ',
//2
    ' ','-',' ',
    ' ',' ','|',
    ' ','-',' ',
    '|',' ',' ',
    ' ','-',' ',
//3
    ' ','-',' ',
    ' ',' ','|',
    ' ','-',' ',
    ' ',' ','|',
    ' ','-',' ',
//4
    ' ',' ',' ',
    '|',' ','|',
    ' ','-',' ',
    ' ',' ','|',
    ' ',' ',' ',
//5
    ' ','-',' ',
    '|',' ',' ',
    ' ','-',' ',
    ' ',' ','|',
    ' ','-',' ',
//6
    ' ','-',' ',
    '|',' ',' ',
    ' ','-',' ',
    '|',' ','|',
    ' ','-',' ',
//7
    ' ','-',' ',
    ' ',' ','|',
    ' ',' ',' ',
    ' ',' ','|',
    ' ',' ',' ',
//8
    ' ','-',' ',
    '|',' ','|',
    ' ','-',' ',
    '|',' ','|',
    ' ','-',' ',
//9
    ' ','-',' ',
    '|',' ','|',
    ' ','-',' ',
    ' ',' ','|',
    ' ','-',' '
};

//第1条横线
void drawline1(int n)
{
    printf(" ");
    for(int i=0;i<s;i++)
    {
        if(p[n][0][1]=='-')
            printf("-");
        else
        {
            printf(" ");
        }
    }
    printf(" ");
}

//第1条竖线
void drawline2(int n)
{
    if(p[n][1][0]=='|')
        printf("|");
    else
        printf(" ");
    
    for(int i=0;i<s;i++)
        printf(" ");
    
    if(p[n][1][2]=='|')
        printf("|");
    else
        printf(" ");
}


//第2条横线
void drawline3(int n)
{
    printf(" ");
    for(int i=0;i<s;i++)
    {
        if(p[n][2][1]=='-')
            printf("-");
        else
        {
            printf(" ");
        }
    }
    printf(" ");
}

//第2条竖线
void drawline4(int n)
{
    if(p[n][3][0]=='|')
        printf("|");
    else
        printf(" ");
    
    for(int i=0;i<s;i++)
        printf(" ");
    
    if(p[n][3][2]=='|')
        printf("|");
    else
        printf(" ");
}

//第3条横线
void drawline5(int n)
{
    printf(" ");
    for(int i=0;i<s;i++)
    {
        if(p[n][4][1]=='-')
            printf("-");
        else
        {
            printf(" ");
        }
    }
    printf(" ");
}

int main()
{
    char a[10];
    while(scanf("%d%d",&s,&n)!=EOF &&s+n)
    {
        memset(a,0,sizeof(a));
        sprintf(a,"%d",n);
        int len=strlen(a);
        
        //输出第1个横线
        for(int i=0;i<len;i++)
        {
            drawline1(a[i]-'0');
            if(i<len-1) printf(" ");
        }
        printf("\n");
        
        //输出第1个竖线
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<len;j++)
            {
                drawline2(a[j]-'0');
                if(j<len-1) printf(" ");
            }
            printf("\n");
        }
        
        //输出第2个横线
        for(int i=0;i<len;i++)
        {
            drawline3(a[i]-'0');
            if(i<len-1) printf(" ");
        }
        printf("\n");
        
        //输出第2个竖线
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<len;j++)
            {
                drawline4(a[j]-'0');
                if(j<len-1) printf(" ");
            }
            printf("\n");
        }
        
        //输出第3个横线
        for(int i=0;i<len;i++)
        {
            drawline5(a[i]-'0');
            if(i<len-1) printf(" ");
        }
        printf("\n");
        
        printf("\n");   //output a blank
    }
    return 0;
}

