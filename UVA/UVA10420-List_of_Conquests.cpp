#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main(){
	int t;
	map<string,int> ms;
	map<string,int>::iterator it;
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	cin>>t;getchar();
	while(t--){
		string c,s;
		cin>>c;
		getline(cin,s);
		ms[c]++;
	}
	for(it=ms.begin();it!=ms.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
