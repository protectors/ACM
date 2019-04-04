#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const double PI=3.1415926;
int main(){
	int t;
	double x1,x2,y1,y2;
	double ans,a,b;
	cin>>t;
	while(t--){
		ans=0;
		cin>>x1>>y1>>x2>>y2;
		a=atan2(y1,x1)*180/PI;
		b=atan2(y2,x2)*180/PI;
		ans=fabs(a-b);
		while(ans>180) ans-=180;
		printf("%.2lf\n",ans);
	}
	return 0;
}