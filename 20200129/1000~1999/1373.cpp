#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	string x;
	cin >> x;//0
	int length = x.size();//1
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (x[i] == '0') {
			count += 1;
		}
	}
	if (count == length) {
		cout << "0";
		return 0;
	}



	int num = 0;
	for (int i = 0; i < length; i++) {
		num += (pow(2, i) * (x[length - 1 - i] - '0'));
	}
	//num=204
	string result = "";
	int q = 9, r;
	while (q >= 8) {
		q = num / 8;//25	3
		r = num % 8;//4		1
		result.append(to_string(r));//4,1
		num = q;//25	3
	}
	result.append(to_string(q));


	reverse(result.begin(), result.end());

	if (result[0] == '0') {
		result.erase(0, 1);
	}


	cout << result;
	return 0;
}