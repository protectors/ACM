#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    char a[]="VWXYZABCDEFGHIJKLMNOPQRSTU";
    char s[210]="",g[210]="";
    while(gets(s)!=NULL&&strcmp(s,"ENDOFINPUT")!=0){
        if(strcmp(s,"START")==0){
            memset(g,0,sizeof(g));
            continue;
        }
        else if(strcmp(s,"END")!=0){
            int len=strlen(s);
            for(int i=0;i<=len;i++){
                if(isalpha(s[i]))
                    g[i]=a[s[i]-'A'];
                else
                    g[i]=s[i];
            }
        }
        else if(strcmp(s,"END")==0){
            puts(g);
            memset(s,0,sizeof(s));
        }
    }
    return 0;
}
