#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int t;
    string name[1001];
    int score[1001],maxn=0;
    map<string,int> p,q;
    map<string,int>::iterator it;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>name[i]>>score[i];
        p[name[i]]+=score[i];
    }
    for(it=p.begin();it!=p.end();it++){
        maxn=max(maxn,it->second);
    }
    for(int i=0;i<t;i++){
        q[name[i]]+=score[i];
        if(p[name[i]]>=maxn&&q[name[i]]>=maxn){
            cout<<name[i]<<endl;
            break;
        }
    }
    return 0;
}
