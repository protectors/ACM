#include <iostream>
#include <cstring>
using namespace std;

int n[5050],v[5050];
int a[250050],b[250050];
int main(){
	int t,last,i;
	while(cin>>t && t>=0){
		for(int i=0;i<t;i++){
			cin>>v[i]>>n[i];
		}

		a[0]=1;
		last=0;
		for(int i=0;i<t;i++){
			int last2=last+n[i]*v[i];
			memset(b,0,sizeof(int)*(last2+1));
			for(int j=0;j<=n[i];j++){
				for(int k=0;k<=last;k++)
					b[k+j*v[i]]+=a[k];
			}
			memcpy(a,b,sizeof(int)*(last2+1));
			last = last2;
		}

		for(i=last/2;i>=0&&a[i]==0;i--);
		cout<<last-i<<' '<<i<<endl;
	}
	return 0;
}