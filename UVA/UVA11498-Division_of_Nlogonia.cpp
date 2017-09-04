#include <iostream>
char *s="OESN";
using namespace std;
int main(){
    int t,n,m,x,y,a,b;
    while(cin>>t&&t){
        cin>>n>>m;
        for(int i=0;i<t;i++){
            a=b=0;
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa"<<endl;
            else{
                if(x>n) a=1;
                if(y>m) b=1;
                cout<<s[2+b]<<s[a]<<endl;
            }
        }
    }
    return 0;
}
