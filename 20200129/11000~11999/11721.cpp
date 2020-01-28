#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int length,x;
	cin >> s;
	length = s.length(); 
	x = length;
	for (int i = 0; i < x; i=i+10) {
		if (length < 10) {
			cout << s.substr(i, length)<<endl;
			break;
		}
		else {
			cout << s.substr(i, 10) << endl;
			length -= 10;
		}
	}
}