#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100;

int n, L, cnt;
int s[maxn];

int dfs(int cur) {
	if (cnt++ == n) {
		for (int i = 0;i < cur;i++) {
			if (i % 64 == 0 && i > 0) printf("\n");
			else if (i % 4 == 0 && i > 0) printf(" ");
			printf("%c", s[i] + 'A');
		}
		printf("\n%d\n",cur);
		return 0;
	}
	for (int i = 0;i < L;i++) {
		s[cur] = i;
		int ok = 1;
		for (int j = 1;j * 2 <= cur + 1;j++) {
			int equal = 1;
			for(int k=0;k<j;k++)
				if (s[cur - k] != s[cur - k - j]) { equal = 0;break; }
			if (equal) { ok = 0;break; }
		}
		if (ok) if (!dfs(cur + 1)) return 0;
	}
	return 1;
}

int main() {
	while (scanf("%d%d",&n,&L)==2 &&(n||L)) {
		cnt = 0;
		memset(s, 0, sizeof(s));
		dfs(0);
	}
	return 0;
}