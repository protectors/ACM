//UVA489
#include <iostream>
#include <cstdio>
#include <cstring>
#define maxn 100
using namespace std;
int Left, chance;       // 还需猜Left个位置，错chance次后就会输
char s[maxn],s2[maxn];  // 答案是字符串s，玩家猜出的字母序列为s2
int win,lose;           // win=1为赢，lose=1为输
void guess(char ch)
{
    int bad=1;
    for(int i=0;i<strlen(s);i++)
        if(s[i]==ch){Left--;s[i]=' ';bad=0;}
    if(bad)
        chance--;
    if(!chance)
        lose=1;
    if(!Left)
        win=1;
}
//判断成功后，更改字符为空格然后重新进行判断
int main()
{
    int rnd;
    while(cin>>rnd&&rnd!=-1)
    {
        scanf("%s%s",s,s2);
        printf("Round %d\n",rnd);
        win=lose=0;
        Left=strlen(s);
        chance=7;
        for(int i=0;i<strlen(s2);i++)
        {
            guess(s2[i]);
            if(win||lose)
                break;
        }
        if(win)
            printf("You win.\n");
        else if(lose)
            printf("You lose.\n");
        else
            printf("You chickened out.\n");

    }
    return 0;
}

