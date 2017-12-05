#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int t,a[3],kase=1;
	cin>>t;
	while(t--){
		for(int i=0;i<3;i++) cin>>a[i];
		sort(a,a+3);
		printf("Case %d: %d\n",kase++,a[1]);
	}
	return 0;
}
