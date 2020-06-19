#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int v[50],n[50];
int a[100],b[100];
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<=26;i++){
			cin>>n[i];
			v[i]=i;
		}
		memset(a,0,sizeof(a));
		a[0]=1;
		int last=0;
		for(int i=1;i<=26;i++){
			int last2=min(last+n[i]*v[i],50);
			memset(b,0,sizeof(int)*(last2+1));

			for(int j=0;j<=n[i]&&j*v[i]<=last2;j++)
				for(int k=0;k<=last&&k+j*v[i]<=last2;k++)
					b[k+j*v[i]]+=a[k];
			memcpy(a,b,sizeof(int)*(last2+1));
			last=last2;
		}
		int res=0;
		for(int i=1;i<=50;i++)
			res+=a[i];
		cout<<res<<endl;
	}
	return 0;
}