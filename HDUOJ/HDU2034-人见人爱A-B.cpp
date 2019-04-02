#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main(){
    set<int> a,b;
    set<int>::iterator it;
    int n,m,x,y;
    while(cin>>n>>m&&(n||m)){
        for(int i=0;i<n;i++){
            cin>>x;
            a.insert(x);
        }
        for(int i=0;i<m;i++){
            cin>>y;
            b.insert(y);
        }
        for(it=b.begin();it!=b.end();it++){
            if(a.count(*it))
                a.erase(*it);
        }
        if(a.empty()==true) cout<<"NULL\n";
        else{
            for(it=a.begin();it!=a.end();it++)
                cout<<*it<<" ";
            cout<<endl;
        }
        a.clear();b.clear();        //多组测试数据因此需要清空。
    }
    return 0;
}
