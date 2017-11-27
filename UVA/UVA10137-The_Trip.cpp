#include <cstdio>
#include <cstring>
int main(){
	int n;
	double a[1100];
	double s,s1,s2,ans;
	while(scanf("%d",&n)!=EOF && n){
		s=s1=s2=0;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			scanf("%lf",&a[i]);
			s+=a[i];
		}
		s/=n;
		s=((int)((s+0.005)*100.0))/100.0;   //保留两位精度
		//printf("%lf\n",s);
		for(int i=1;i<=n;i++){
			if(a[i]<s)
				s1+=s-a[i];
			else
				s2+=a[i]-s;
		}
		ans=s1>s2?s2:s1;
		printf("$%.2lf\n",ans);
	}
	return 0;
}
