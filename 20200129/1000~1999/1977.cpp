#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int count = 0;
	int min;
	cin >> m >> n;
	for (int i = 0; i <= 100; i++) {
		if ((sqrt(m) <= i)&& (i<= sqrt(n))) {
			sum += i * i;
			count += 1;
		}
	}
	for (int i = 0; i <= 100; i++) {
		if ((sqrt(m) <= i) && (i <= sqrt(n))) {
			min = i * i;
			break;
		}
	}


	if (count == 0) {
		cout << "-1"; return 0;
	}
	else {
		cout << sum << "\n" << min;
	}
}