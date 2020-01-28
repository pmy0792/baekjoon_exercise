#include <iostream>
using namespace std;
#include <string>
int main() {
	string s;
	do{
	getline(cin, s);
	cout << s<<endl;
	} while (s != "");
	return 0;
}