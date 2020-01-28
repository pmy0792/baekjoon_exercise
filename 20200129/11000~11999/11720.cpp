#include <iostream>
using namespace std;

int main() {
	int n;
	char x;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += (x-'0');
	}
	cout << sum;
}