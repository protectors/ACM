#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n,kase=0;
	int s[20];
	long long ans,sum;
	while (cin >> n) {
		ans = 0;
		for (int i = 0;i < n;i++) scanf("%d", &s[i]);
		for (int i = 0;i < n;i++) {
			sum = 1;
			for (int j = i ;j < n;j++) {
				sum *= s[j];
				ans = max(sum, ans);
			}
		}
		printf("Case #%d: The maximum product is %lld.\n\n", ++kase, ans);
	}
	return 0;
}
