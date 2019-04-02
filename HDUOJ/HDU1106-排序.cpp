#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int r[1001],cnt;
int a(string s){
    stringstream ss(s);
    int x;
    ss>>x;
    return x;
}
int main(){
    string s;
    while(cin>>s){
        cnt=0;
        memset(r,0,sizeof(r));
        s+='5';
        string t;
        while(s.size()){
            t=s.substr(0,s.find('5'));
            if(t.size()){
                r[cnt++]=a(t);
                s.erase(0,t.size());
            }
            while(s[0]=='5' &&s.size()) s.erase(0,1);
        }
        sort(r,r+cnt);
        for(int i=0;i<cnt;i++) printf("%d%c",r[i],i==cnt-1?'\n':' ');
    }
    return 0;
}


/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char str[1001];
    while(cin>>str){
        int cnt=0,a[1005];
        char *p=strtok(str,"5");
        while(p!=NULL){
            a[cnt++]=atoi(p);
            p=strtok(NULL,"5");
        }
        sort(a,a+cnt);
        for(int i=0;i<cnt;i++) printf("%d%c",a[i],i==cnt-1?'\n':' ');
    }
    return 0;
}
*/
