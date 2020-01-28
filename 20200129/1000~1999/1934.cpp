#include <iostream>
using namespace std;

int gcd(int x, int y) {

	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int lcm(int x, int y) {
	return (x * y) / gcd(x, y);
}


int main() {
	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}

}