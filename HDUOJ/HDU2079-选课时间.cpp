#include <iostream>
#include <cstring>

using namespace std;
int s[50];
int tmp[50];
int sup[50];
int main(){
	int t,n,k,a,b;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a>>b;
			s[a]=b;
		}

		memset(tmp,0,sizeof(tmp));
		memset(sup,0,sizeof(sup));

		sup[0]=1;
		for(int i=1;i<=k;i++){
			for(int j=0;j<=n;j++){
				for(int x=0;x<=s[i]&&x*i+j<=n;x++){
					tmp[x*i+j]+=sup[j];
				}
			}

			for(int j=0;j<=n;j++){
				sup[j]=tmp[j];
				tmp[j]=0;
			}
		}
		cout<<sup[n]<<endl;
	}
	return 0;
}