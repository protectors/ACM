#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            int t=1;
            while(s[i+1]==s[i]){
                t++; i++;
            }
            if(t==1) cout<<s[i];
            else cout<<t<<s[i-1];
        }
        cout<<endl;
    }
    return 0;
}
