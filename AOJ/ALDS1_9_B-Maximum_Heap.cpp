#include <iostream>

using namespace std;
const int MAX = 2000000;

int H, a[MAX];

void maxHeapify(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=H&&a[l]>a[i]) largest=l;
    else largest=i;
    if(l<=H&&a[r]>a[largest]) largest=r;

    if(largest!=i){
        swap(a[i], a[largest]);
        maxHeapify(largest);
    }
}


int main(){
    cin>> H;
    for(int i=1;i<=H;i++) cin>>a[i];
    for(int i=H/2;i>=1;i--) maxHeapify(i);
    for(int i=1;i<=H;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    return 0;
}