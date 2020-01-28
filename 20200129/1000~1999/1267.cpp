#include <iostream>
using namespace std;

int YS(int time) {
	int q, r;
	int charge;
	q = time / 30;
	charge = 10 * (q+1);
	return charge;
}

int MS(int time) {
	int q, r;
	int charge;
	q = time / 60;
	charge = 15 * (q + 1);
	return charge;
}

int main() {
	int n,YScharge,MScharge,time;
	YScharge = 0;
	MScharge = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> time;
		YScharge += YS(time);
		MScharge += MS(time);
	}
	if (YScharge > MScharge) {
		cout << "M " << MScharge;
	}
	else if (YScharge < MScharge) {
		cout << "Y " << YScharge;
	}
	else {
		cout << "Y M " << YScharge;
	}
	return 0;
}