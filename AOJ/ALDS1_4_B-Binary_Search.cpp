#include <iostream>
using namespace std;
int s[100100];
int binarysearch(int a[], int n,int key){
	int left = 0;
	int right = n;
	while (left < right) {
		int mid = (left + right) / 2;
		if (a[mid] == key)
			return 1;
		else if (key < a[mid])
			right = mid;
		else
			left = mid + 1;
	}
	return 0;
}

int main(){
	int n, q,t,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t;
		sum += binarysearch(s, n, t);
	}
	cout << sum << endl;
	return 0;
}

