#include <iostream>
using namespace std;

int fac(int x) {
	int result=1;
	for (int i = x; i > 0; i--) {
		result = result * i;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	cout << fac(n);
}