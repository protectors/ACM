#include <iostream>

using namespace std;

const int MAX = 100000;
const int INF = 2e9+10;

struct Card{
    char suit;
    int value;
};

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card a[], int n, int l, int mid, int r){
    int i,j,n1=mid-l,n2=r-mid;
    for(i=0;i<n1;i++) L[i]=a[l+i];
    for(j=0;j<n2;j++) R[j]=a[mid+j];
    L[n1].value=R[n2].value=INF;

    i=j=0;

    for(int k=l;k<r;k++){
        if(L[i].value<=R[j].value) a[k]=L[i++];
        else a[k]=R[j++];
    }
}

void mergeSort(Card a[],int n, int l,int r){

    if(l+1<r){
        int mid=(l+r)/2;
        mergeSort(a,n,l,mid);
        mergeSort(a,n,mid,r);
        merge(a,n,l,mid,r);
    }
}

int Partition(Card a[], int n, int l, int r){
    int i=l-1;
    Card x=a[r];
    for(int j=l;j<r;j++){
        if(a[j].value<=x.value){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quickSort(Card a[],int n,int l, int r){
    if(l<r){
        int mid=Partition(a,n,l,r);
        // mid 点已经处理好了,无需进行分治处理
        quickSort(a,n,l,mid-1);
        quickSort(a,n,mid+1,r);
    }
}

int main(){
    int n,v;
    Card A[MAX], B[MAX];
    char S[10];
    bool stable=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>S>>v;
        A[i].suit=B[i].suit=S[0];
        A[i].value=B[i].value=v;
    }
    mergeSort(A,n,0,n);
    quickSort(B,n,0,n-1);

    for(int i=0;i<n;i++){
        if(A[i].suit!=B[i].suit) stable=false;
    }

    if(stable) cout<<"Stable\n";
    else cout<<"Not stable\n";

    for(int i=0;i<n;i++){
        cout<<B[i].suit<<" "<<B[i].value<<endl;
    }
    return 0;
}