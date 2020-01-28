#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t,a,b;
	vector <int> vec;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		vec.push_back(a + b);
	}

	for (auto elem : vec)
		cout << elem << endl;

	return 0;
}