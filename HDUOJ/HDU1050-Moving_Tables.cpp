#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int s,d,t,n,p[200];
	cin>>t;
	while(t--){
		memset(p,0,sizeof(p));
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>s>>d;
			s=(s-1)/2;
			d=(d-1)/2;
			if(s>d){int t=s; s=d;d=t;}
			for(int k=s;k<=d;k++) p[k]++;
		}
		int min=-1;
		for(int j=0;j<200;j++) if(p[j]>min) min=p[j];
		cout<<min*10<<endl;
	}
	return 0;
}