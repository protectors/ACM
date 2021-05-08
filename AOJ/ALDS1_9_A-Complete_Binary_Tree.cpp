#include <iostream>
using namespace std;
#define MAX 100000

int parent(int i){ return i/2; }
int left(int i){ return 2*i; }
int right(int i){ return 2*i+1; }

int main(){
    int H, a[MAX+1];

    cin>>H;
    for(int i=1;i<=H;i++) cin>>a[i];

    for(int i=1;i<=H;i++){
        cout<<"node "<<i<<": key = "<<a[i]<<", ";
        if(parent(i)>=1) cout<<"parent key = "<<a[parent(i)]<<", ";
        if(left(i)<=H) cout<<"left key = "<<a[left(i)]<<", ";
        if(right(i)<=H) cout<<"right key = "<<a[right(i)]<<", ";
        cout<<endl;
    }

    return 0;
}