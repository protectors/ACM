#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t,h,m,s;
	double ans,a,b;
	cin>>t;
	while(t--){
		ans=0;
		cin>>h>>m>>s;
		if(h>12) h-=12;		//注意12h后重置
		a=h*30+m*0.5+s*0.5/60;
		b=m*6+s*0.1;
		ans=fabs(a-b);
		if(ans>180) ans=360-ans;
		cout<<(int)ans<<endl;
	}
	return 0;
}