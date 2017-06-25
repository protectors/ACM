#include <iostream>
using namespace std;

int n, a[30];

int solve(int i, int m) {
	if (m == 0) return 1;
	if (i >= n) return 0;
	int res = solve(i + 1, m) || solve(i + 1, m - a[i]);
	return res;
}

int main(){
	int q, t;;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t;
		if (solve(0, t)) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
