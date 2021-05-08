#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAX = 2000000;
const int INFTY=1<<30;

int H, a[MAX+1];

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

int extract(){
    int maxv;
    if(H<1) return -INFTY;
    maxv=a[1];
    a[1]=a[H--];
    maxHeapify(1);
    return maxv;
}

void increasekey(int i, int key){
    if(key<a[i]) return;
    a[i]=key;
    while(i>1&&a[i/2]<a[i]){
        swap(a[i], a[i/2]);
        i=i/2;
    }
}

void insert(int key){
    H++;
    a[H]=-INFTY;
    increasekey(H, key);
}


int main(){
    int key;
    char com[10];
    while(true){
        cin>>com;
        if(com[0]=='e' && com[1]=='n') break;
        if(com[0]=='i'){
            cin>>key;
            insert(key);
        } else{
            cout<<extract()<<endl;
        }
    }
    return 0;
}