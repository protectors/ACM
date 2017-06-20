#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000;

int gcd(int m, int n)
{
	if (m < n) swap(m, n);
	if (n == 0) return m;
	else
		return gcd(n, m%n);
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	return 0;
}