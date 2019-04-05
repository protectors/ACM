 #include<iostream>
using namespace std;
int f(int n){
	if(n==1) return 3;
	else if(n==2) return 9;
	else return 2*f(n-1)+f(n-2);	//f(n)=f(n-1)*3+(f(n-1)-f(n-2))*2
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<f(n)<<endl;
	}
	return 0;
}