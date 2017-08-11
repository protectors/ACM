#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100;

int is_prime(int x) {
	for (int i = 2;i*i <= x;i++)
		if (x%i == 0) return 0;
	return 1;
}

int n, a[maxn], isp[100], vis[100];
void dfs(int cur) {
	if (cur == n&&isp[a[0] + a[n - 1]]) {
		for (int i = 0;i < n;i++) {
			if (i != 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	else for (int i = 2;i <= n;i++) {
		if (!vis[i] && isp[i + a[cur - 1]]) {
			a[cur] = i;
			vis[i] = 1;
			dfs(cur + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	int kase=0;
	while (scanf("%d",&n)==1) {
		if (kase) printf("\n");
		printf("Case %d:\n", ++kase);
		for (int i = 2;i <= n * 2;i++) isp[i] = is_prime(i);
		memset(vis, 0, sizeof(vis));
		a[0] = 1;
		dfs(1);
	}
	return 0;
}