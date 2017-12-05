#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,s,d;
		cin>>s>>d;
		if(a>=b){
			a=(d+s)/2;
			b=a-d;
		}
		else{
			b=(d+s)/2;
			a=b-d;
		}
		if(a<b) swap(a,b);
		if(a+b==s&&abs(a-b)==d&& a>=0 &&b>=0)
			cout<<a<<" "<<b<<endl;
		else cout<<"impossible"<<endl;
	}
	return 0;
}
