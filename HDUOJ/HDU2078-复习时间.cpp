#include <iostream>
#include <algorithm>
using namespace std;
int a[50];
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) 
			cin>>a[i];
		sort(a,a+n);
		int maxn=(100-a[0])*(100-a[0]);
		for(int i=1;i<m;i++){
			int tmp=(a[i]-a[i-1])*(a[i]-a[i-1]);
			maxn = max(tmp,maxn);
		}
		cout<<maxn<<endl;
	}
	return 0;
}