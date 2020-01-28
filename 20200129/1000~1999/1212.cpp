#include <iostream>
#include <string>
using namespace std;

int main() {
	string x;
	cin >> x;
	if (atoi(x.c_str())==0) { cout << "0"; return 0; }
	int length = x.size();
	if (x[0]-'0' <= 3) {
		if (x[0] == '1') { cout << "1"; }
		else if (x[0] == '2') { cout << "10"; }
		else { cout << "11"; }
		int i = 1;
		for (; i < length; i++) {
			if (x[i] == '0') cout << "000";
			if (x[i] == '1') cout << "001";
			if (x[i] == '2') cout << "010";
			if (x[i] == '3') cout << "011";
			if (x[i] == '4') cout << "100";
			if (x[i] == '5') cout << "101";
			if (x[i] == '6') cout << "110";
			if (x[i] == '7') cout << "111";
		}
	}
	else {
		int i = 0;
		for (; i < length; i++) {
			if (x[i] == '0') cout << "000";
			if (x[i] == '1') cout << "001";
			if (x[i] == '2') cout << "010";
			if (x[i] == '3') cout << "011";
			if (x[i] == '4') cout << "100";
			if (x[i] == '5') cout << "101";
			if (x[i] == '6') cout << "110";
			if (x[i] == '7') cout << "111";
		}
	}
	
	return 0;
}