#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n1[150],n2[150];
int a[1000010],b[1000010];
int main(){
	int N,M;
	while(cin>>N>>M){
		for(int i=0;i<N;i++)
			cin>>n1[i]>>n2[i];

		memset(a,0,sizeof(a));
		a[0]=1;
		for(int i=0;i<N;i++){
			memset(b,0,sizeof(b));
			for(int j=n1[i];j<=n2[i]&&j<=M;j++)
				for(int k=0;k+j<=M;k++)
					b[k+j]+=a[k];
			memcpy(a,b,sizeof(b));
		}
		cout<<a[M]<<endl;
	}
	return 0;
}