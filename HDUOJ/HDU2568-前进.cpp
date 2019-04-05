#include <iostream>
using namespace std;
int main(){
	int t,n,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		while(n){
			if(n&1) ans++,n--;
			n>>=1;
		}
		cout<<ans<<endl;

	}
	return 0;
}