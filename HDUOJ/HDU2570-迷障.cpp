#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int t,a[110];
	cin>>t;
	while(t--){
		int n,v,w;
		cin>>n>>v>>w;
 	 	for(int i=0;i<n;i++) cin>>a[i];
 	 	sort(a,a+n);
 	 	int i,tmp=0;
 	 	for(i=0;i<n;i++){
 	 		if((double)(tmp+a[i])/(double)(i+1)<=w) tmp+=a[i];
 	 		else break;
 	 	}
 	 	if(!i) printf("0 0.00\n");
 	 	else printf("%d %.2lf\n",i*v,tmp*1.0/(i*100));	//100要小心
	}
	return 0;
}