#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int size = 1000001;
	bool* number=new bool[size];
	number[0] = false;
	number[1] = false;
	for (int i = 2; i <= b; i++) {
		number[i] = true;
	}
	for (int i = 2; (i * i) <= b; i++) {
		if (number[i]) {
			for (int j = i + i; j <= b; j += i) {
				number[j] = false;
			}
		}
	}
	if (a == 1) a++;
	for (int i = a; i <= b; i++) {
		if (number[i]) {
			cout << i << "\n";
		}
	}
	delete[]number;
	return 0;
}