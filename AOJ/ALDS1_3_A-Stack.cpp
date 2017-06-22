#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	int a, b;
	string s;
	stack<int> t;
	while (cin >> s){
		if (s[0] == '+') {
			a = t.top();
			t.pop();
			b = t.top();
			t.pop();
			t.push(a + b);
		}
		else if (s[0] == '-') {
			a = t.top();
			t.pop();
			b = t.top();
			t.pop();
			t.push(b - a);
		}
		else if (s[0] == '*') {
			a = t.top();
			t.pop();
			b = t.top();
			t.pop();
			t.push(a * b);
		}
		else
			t.push(atoi(s.c_str()));
	}
	cout << t.top() << endl;
	return 0;
}
