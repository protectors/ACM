#include <iostream>
using namespace std;
const int maxn= 70000;

long long s=0;
int a[maxn];
int la[maxn],ra[maxn];


void merge(int l,int m,int r){
    int p1=0,p2=0,j,k;
    for(int i=l;i<=m;i++) la[p1++]=a[i];
    for(int i=m+1;i<=r;i++) ra[p2++]=a[i];
    la[p1]=ra[p2]=0x3f3f3f3f;
    j=k=0;
    for(int i=l;i<=r;i++){
        if(la[j]<=ra[k]) a[i]=la[j++];
        else{
            a[i]=ra[k++];
            s+=p1-j;
        }
    }
}

void mergeSort(int l,int r){
    if(l>=r) return;
    int m=(l+r)>>1;
    mergeSort(l,m);
    mergeSort(m+1,r);
    merge(l,m,r);
}

int main(){
    int n;
    scanf("%d",&n);
    s=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    mergeSort(0,n-1);
    cout<<s<<endl;
    return 0;
}