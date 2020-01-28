#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,a,b;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		a = s[0] - 48;
		b = s[2] - 48;
		cout << a + b << "\n";
	}
	return 0;
}