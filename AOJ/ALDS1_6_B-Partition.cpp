#include <iostream>

using namespace std;
const int MAXN=100010;
int a[MAXN];

int partition(int l,int r){
    int x=a[r], i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int idx=partition(0,n-1);

    for(int i =0;i<n;i++){
        if(i) cout<<" ";
        if(i==idx) cout<<"["<<a[i]<<"]";
        else cout<<a[i];
    }
    cout<<endl;
    return 0;
}