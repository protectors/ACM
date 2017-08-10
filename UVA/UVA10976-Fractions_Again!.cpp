#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main() {
	int k;
	
	//freopen("in.txt", "r", stdin); //输入从in.txt
	//freopen("out.txt", "w", stdout);//输出到out.txt
	while (cin >> k) {
		vector<int> vx,vy;
		for (int y = k+1;y <= 2 * k;y++) {
			if (k*y % (y - k)==0){
				vx.push_back(k*y / (y - k));
				vy.push_back(y);
			}
		}
		printf("%d\n", vx.size());
		for (int i = 0;i < vx.size();i++)
			printf("1/%d = 1/%d + 1/%d\n", k, vx[i], vy[i]);
	}
	return 0;
}
