#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string s,t;
	cin>>n;
	while(n--){
		cin>>s>>t;
		int len=s.size()/2;
		s.insert(len,t);
		cout<<s<<endl;
	}
	return 0;
}