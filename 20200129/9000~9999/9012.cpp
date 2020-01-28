#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n;
	stack<char> stk;
	bool result = 1;
	for (int i = 0; i < n; i++) {
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(')  stk.push(s[j]);
			else {//s[j]==')'ÀÏ¶§
				if (!stk.empty()) stk.pop();
				else if (stk.empty()) { result = 0; }
			}

			if (j == s.length() - 1 && (!stk.empty())) { result = 0; }
		}
		if (result == 1) { cout << "YES\n"; }
		else { cout << "NO\n"; }

		while (!stk.empty()) { stk.pop(); }
		result = 1;
	}
	
}