#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 20000 + 10;
int p[maxn],d[maxn];
int find(int x) {
	if (p[x] == x) return x;
	else {
		int root = find(p[x]);
		d[x] += d[p[x]];
		return p[x] = root;
	}
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, u, v;
		char cmd[10];
		cin >> n;
		for (int i = 1; i <= n; i++) { p[i] = i; d[i] = 0; }
		while (cin >> cmd &&cmd[0] != 'O') {
			if (cmd[0] == 'E') { cin >> u; find(u); cout << d[u] << endl; }
			if (cmd[0] == 'I') { cin >> u >> v; p[u] = v; d[u] = abs(u - v) % 1000; }
		}
	}
	return 0;
}
