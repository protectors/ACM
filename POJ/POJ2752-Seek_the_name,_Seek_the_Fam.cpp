#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
const int maxn=400000+5;
char s[maxn];
int nxt[maxn];
int len;
void build_next(){
    nxt[1]=0;
    int i,j=0;
    for(i=2;i<=len;i++){
        while((j>0) && s[j+1]!=s[i]) j=nxt[j];
        if(s[j+1]==s[i]) j++;
        nxt[i]=j;
    }
}
void getNext(){
    int j, k;
    j = 0; k = -1; nxt[0] = -1;
    while(j < len){
        if(k == -1 || s[j] == s[k]) nxt[++j] = ++k;
        else k = nxt[k];
    }
}
void output(int x){
    if(nxt[x]==0){
        cout<<x<<" ";
        return;
    }
    output(nxt[x]);
    cout<<x<<" ";
}
int main(){
    while(cin>>(s+1)){
        memset(nxt,0,sizeof(nxt));
        len=strlen(&s[1]);
        build_next();
        output(len);
        cout<<endl;
    }
    return 0;
}
