#include <stdio.h>
#define N 105
int main()
{
	int R,x[N],n,i,count = 0;
	int first, second;
	scanf("%d%d",&n,&R);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&x[i]);
	}
	i = 0;
	while(i < n)
	{
		first = x[i]; i++;
		while(i < n && x[i] <= first+R) i++;
		second = x[i-1];
		count++;
		while(i < n && x[i] <= second+R) i++;
	}
	printf("%d\n",count);
	return 0;
}

