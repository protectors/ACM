#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 100000 + 10;
int p[maxn];
int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
int main() {
	int x, y;
	while (cin >> x) {
		for (int i = 0; i <= maxn; i++) p[i] = i;
		int ans = 0;
		while (x != -1) {
			cin >> y;
			x = find(x);
			y = find(y);
			if (x == y) ans++;
			else p[x] = y;
			cin >> x;
		}
		cout << ans << endl;
	}
	return 0;
}

