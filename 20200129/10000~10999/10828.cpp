#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n,x;
	string cmd;
	stack<int> stk;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cmd;
		
		if (cmd == "push") {
			cin >> x;
			stk.push(x);
		}

		else if (cmd == "top") {
			if (stk.empty()) { cout << "-1\n"; }
			else { cout << stk.top() << "\n"; }
		}
		else if (cmd == "size") {
			cout << stk.size()<<"\n";
		}
		else if (cmd == "empty") {
			if (stk.empty()) { cout << "1\n"; }
			else cout << "0\n";
		}
		else if (cmd == "pop") {
			if (stk.size() == 0) { cout << "-1\n"; }
			else {
				cout << stk.top()<<"\n";
				stk.pop();
			}
		}
	}
	return 0;
}