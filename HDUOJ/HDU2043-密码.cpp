#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;
int main(){
    char g[]="~!@#$%^";
    int n,z,a,b,c,d;
    string s;
    cin>>n;
    while(n--){
        a=b=c=d=0;
        cin>>s;
        if(s.size()>=8&&s.size()<=16){
            for(int i=0;i<s.size();i++){
                if(s[i]>='A'&&s[i]<='Z')
                    a=1;
                if(s[i]>='a'&&s[i]<='z')
                    b=1;
                if(s[i]>='0'&&s[i]<='9')
                    c=1;
                for(int j=0;j<7;j++)
                    if(s[i]==g[j]) d=1;
            }
            z=a+b+c+d;
            if(z>=3) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
