#include <iostream>
using namespace std;
int qmod(int a,int b){
	int ans=0;
	while(b){
		if(b&1) ans=(ans*a)%1000;
		a=(a*a)%1000;
		b>>=1;
	}
	return ans;
}
int main(){
	int a,b;
	while(cin>>a>>b &&(a||b)){
		cout<<qmod(a,b)<<endl;
	}
	return 0;
}