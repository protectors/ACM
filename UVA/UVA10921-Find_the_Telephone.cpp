#include <iostream>
#include <cctype>
#include <string>
int a[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,
            7,7,7,7,8,8,8,9,9,9,9};
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int len=s.length();
        for(int i=0;i<len;i++){
            if(isalpha(s[i])) cout<<a[s[i]-'A'];
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
