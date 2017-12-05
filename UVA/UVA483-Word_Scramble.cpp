#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    string s;
    char c;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            reverse(s.begin(),s.end());
            cout<<s<<endl;
            s.clear();
        }
        else if(c==' '){
            reverse(s.begin(),s.end());
            cout<<s;
            putchar(' ');
            s.clear();
        }
        else s+=c;
    }
    return 0;
}
