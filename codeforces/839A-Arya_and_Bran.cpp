#include <iostream>
using namespace std;
int main() {
	int n, k, t=0,s=0,ans=0,a[110];
	cin >> n >> k;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		if (t + a[i] > 8) {
			k -= 8;
			t = a[i] + t - 8;
		}
		else {
			k -= a[i] + t;
			t = 0;
		}
		if (k <= 0) {
			ans = i;break;
		}
	}
	if (k<=0) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}
