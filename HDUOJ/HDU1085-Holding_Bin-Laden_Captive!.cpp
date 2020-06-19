#include <iostream>
#include <cstring>
using namespace std;

int res[8100],tmp[8100];
int v[3]={1,2,5};
int n[3];

int main(){
	while(cin>>n[0]>>n[1]>>n[2]){
		if(n[0]==0&&n[1]==0&&n[2]==0) break;

		res[0]=1;
		int last=0;
		for(int i=0;i<3;i++){
			int last2=last+n[i]*v[i];
			memset(tmp,0,sizeof(int)*(last2+1));
			for(int j=0;j<=n[i];j++)
				for(int k=0;k<=last;k++)
					tmp[k+j*v[i]]+=res[k];

			memcpy(res,tmp,sizeof(int)*(last2+1));
			last=last2;
		}

		int ans;
		for(ans=0;ans<=last;ans++){
			cout<<ans<<":"<<res[ans]<<endl;
			if(res[ans]==0){
				break;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}