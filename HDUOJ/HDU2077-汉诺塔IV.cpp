#include <iostream>
#include <cmath>
using namespace std;

int f[25];

int main(){

	f[0]=0; f[1]=2; f[2]=4;

	for(int i=3;i<=20;i++){
		f[i]=3*f[i-1]-2;
		// cout<<i<<':'<<f[i]<<endl;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<f[n]<<endl;
	}
	return 0;
}
