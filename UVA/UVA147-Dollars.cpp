//UVA147
#include <cstdio>
int a[]={1,2,4,10,20,40,100,200,400,1000,2000};
long long dp[6010];
int main()
{
	for(int i=0;i<=6000;i++) dp[i]=1;
	for(int i=1;i<11;i++)
	{
		for(int j=a[i];j<=6000;j++)
			dp[j]+=dp[j-a[i]];
	}
	double s;
	while(scanf("%lf",&s))
	{
		if(s==0.0) break;
		int n=s*20;
		printf("%6.2lf%17lld\n",s,dp[n]);
	}
	return 0;
}
