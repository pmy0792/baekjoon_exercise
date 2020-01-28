#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int a) {
	if (a < 2) return false;
	else {
		for (int i = 2; i <= sqrt(a); i++) {
			if (a % i == 0) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n,x;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (isprime(x)) {
			count += 1;
		}
	}
	cout << count;
}