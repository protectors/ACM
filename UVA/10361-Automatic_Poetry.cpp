//UVA10361
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
const int maxn=120;
using namespace std;

int main()
{
   // freopen("cin.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,j;
    char s1[maxn],s2[maxn],s3[maxn],s4[maxn],s5[maxn],s[maxn],sn[maxn];
    cin>>n;
    getchar();
    while(n--)
    {
        int a,b,c,d,e;
        a=b=c=d=e=0;
        memset(s,0,sizeof(s));
        memset(sn,0,sizeof(sn));
        gets(s);
        gets(sn);
        for(i=0;s[i]!='<';i++)
            s1[a++]=s[i];
        s1[a]='\0';
        for(j=i+1;s[j]!='>';j++)
            s2[b++]=s[j];
        s2[b]='\0';
        for(i=j+1;s[i]!='<';i++)
            s3[c++]=s[i];
        s3[c]='\0';
        for(j=i+1;s[j]!='>';j++)
            s4[d++]=s[j];
        s4[d]='\0';
        for(i=j+1;s[i]!='\0';i++)
            s5[e++]=s[i];
        s5[e]='\0';
        cout<<s1<<s2<<s3<<s4<<s5<<endl;
        sn[strlen(sn)-3]='\0';
        cout<<sn<<s4<<s3<<s2<<s5<<endl;
    }
    return 0;
}
