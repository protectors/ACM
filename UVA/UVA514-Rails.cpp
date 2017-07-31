#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
const int maxn=1001;

int s[maxn];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,flag,a,b;
    stack<int> c;

    while(cin>>n&&n)
    {
        while(1)
        {
            flag=1;
            for(int i=1;i<=n;i++)
            {
                cin>>s[i];
                if(s[1]==0) break;
            }
            if(s[1]==0) break;

            a=b=1;
            while(b<=n)
            {
                if(s[b]==a){a++;b++;}
                else if(!c.empty()&& c.top()==s[b]){b++;c.pop();}
                else if(a<=n) {c.push(a++);}
                else {flag=0;break;}
            }
            if(flag) cout<<"Yes\n";
            else cout<<"No\n";
        }
        cout<<endl;
    }
    return 0;
}
