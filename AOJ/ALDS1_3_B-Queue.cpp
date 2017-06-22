#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <queue>
using namespace std;

typedef struct {
	string name;
	int t;
}P;

queue <P> u;

int main(){
	int n, q,sum=0;
	P tmp;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> tmp.name >> tmp.t;
		u.push(tmp);
	}
	while (!u.empty()) {
		tmp = u.front();
		u.pop();
		int c= min(q, tmp.t);
		tmp.t -= c;
		sum += c;
		if (tmp.t > 0) u.push(tmp);
		else cout << tmp.name << " " << sum << endl;
	}
	return 0;
}
