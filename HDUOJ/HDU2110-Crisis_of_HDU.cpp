#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n[150],v[150];
int a[1000010],b[1000010];
int main(){
	int N;
	while(cin>>N&&N){
		int sum=0;
		for(int i=0;i<N;i++){
			cin>>v[i]>>n[i];
			sum+=v[i]*n[i];
		}
		if(sum%3!=0){
			cout<<"sorry"<<endl;
			continue;
		}

		sum/=3;
		memset(a,0,sizeof(a));
		a[0]=1;
		int last=0;
		for(int i=0;i<N;i++){
			int last2=min(last+v[i]*n[i],sum);
			memset(b,0,sizeof(int)*(last2+1));
			for(int j=0;j<=n[i]&&j*v[i]<=last2;j++){
				for(int k=0;k<=last&&k+j*v[i]<=last2;k++){
					b[k+j*v[i]]+=a[k];
					b[k+j*v[i]]%=10000;
				}
			}
			memcpy(a,b,sizeof(int)*(last2+1));
			last=last2;
		}
		// for(int i=0;i<=last;i++) cout<<i<<":"<<a[i]<<endl;
		if(a[sum]>0) cout<<a[sum]<<endl;
		else cout<<"sorry"<<endl;

	}
	return 0;
}