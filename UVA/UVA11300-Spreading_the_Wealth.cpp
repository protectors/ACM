#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int maxn=1000000+5;
long long a[maxn],c[maxn],tot,m;
int main()
{
	int n;
	while(cin>>n)
	{
		tot=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tot+=a[i];
		}
		m=tot/n;
		c[0]=0;
		for(int i=1;i<n;i++) c[i]=c[i-1]+a[i]-m;
		sort(c,c+n);
		long long x=c[n/2],ans=0;
		for(int i=0;i<n;i++) ans+=abs(x-c[i]);
		cout<<ans<<endl;
	}
	return 0;
}
