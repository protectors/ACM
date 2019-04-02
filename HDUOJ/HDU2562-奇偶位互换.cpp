#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    int t,n;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i+=2){
            swap(s[i],s[i+1]);
        }
        cout<<s<<endl;
    }
    return 0;
}
