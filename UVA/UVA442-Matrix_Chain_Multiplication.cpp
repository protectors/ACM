#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

struct Matrix{
    int a,b;
    Matrix(int x=0,int y=0):a(x),b(y){}
}m[30],ma,mb;

stack<Matrix> s;

int main()
{
    int ok,ans,t,n,x,y;
    string name,expre;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>x>>y;
        t=name[0]-'A';
        m[t].a=x; m[t].b=y;
        //cout<<t<<" "<<m[t].a<<" "<<m[t].b<<endl;
    }
    while(cin>>expre){
        ans=0; ok=1;
        int len=expre.size();
        for(int i=0;i<len;i++){
            if(isalpha(expre[i])) s.push(m[expre[i]-'A']);
            else if(expre[i]==')'){
                mb=s.top();s.pop();
                ma=s.top();s.pop();     //can not be converse
                if(ma.b!=mb.a){ok=0;break;}
                ans+=ma.a*ma.b*mb.b;
                s.push(Matrix(ma.a,mb.b));
            }
        }
        if(ok) cout<<ans<<endl;
        else cout<<"error\n";
    }
    return 0;
}
