#include <iostream>
#include <cstring>
using namespace std;

int v[50];
int a[310],b[310];
int main(){
	int t,i,j,k;
	for(int i=0;i<17;i++){
		v[i]=(i+1)*(i+1);
	}
	while(cin>>t && t!=0){
		
		memset(a,0,sizeof(a));
		a[0]=1;
		for(int i=0;i<17;i++){
			memset(b,0,sizeof(b));
			for(int j=0;j*v[i]<=t;j++){
				for(int k=0;k+j*v[i]<=t;k++)
					b[k+j*v[i]]+=a[k];
			}
			memcpy(a,b,sizeof(b));
		}

		cout<<a[t]<<endl;
		
	}
	return 0;
}