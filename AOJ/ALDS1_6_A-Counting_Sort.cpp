#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;
const int MAX=2000010;
const int VMAX=10010;
unsigned short A[MAX], B[MAX];
int main(){

    int C[VMAX];
    int n;
    cin>>n;

//    A=malloc(sizeof(unsigned short)*n+1);
//    B=malloc(sizeof(unsigned short)*n+1);

    // 初始化
    for(int i=0;i<=VMAX;i++) C[i]=0;

    // 统计
    for(int i=0;i<n;i++){
        cin>>A[i+1];
        C[A[i+1]]++;
    }

    // 记录位置
    for(int i=1;i<=VMAX;i++) C[i]=C[i]+C[i-1];

    // 输出到B
    for(int j=1;j<=n;j++){
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }

    for(int i=1;i<=n;i++){
        if(i>1) cout<<" ";
        cout<<B[i];
    }
    cout<<endl;

    return 0;
}