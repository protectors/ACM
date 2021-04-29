#include <iostream>

using namespace std;
typedef long long ll;
const int inf = 2e9;
const int N = 200010;

int L[N/2+2], R[N/2+2];
int a[N];
ll sum=0;

void Merge(int a[], int l, int mid, int r){
    int i,j,left=mid-l, right=r-mid;
    for(i=0;i<left;i++) L[i]=a[l+i];
    for(j=0;j<right;j++) R[j]=a[mid+j];
    L[i]=R[j]=inf;
    i=j=0;

    for(int k=l;k<r;k++){
        if(L[i]<=R[j]) a[k]=L[i++];
        else{
            a[k]=R[j++];
            sum+=left-i;    // 表示L数组中最终由多少个元素移到R数组元素的后面
        }
    }
}

void mergeSortCount(int a[], int l, int r){
    if (l+1<r){
        int mid = (l + r) / 2;
        mergeSortCount(a, l, mid);
        mergeSortCount(a, mid, r);
        Merge(a, l, mid, r);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    mergeSortCount(a,0,n);
    cout<<sum<<endl;
    return 0;
}