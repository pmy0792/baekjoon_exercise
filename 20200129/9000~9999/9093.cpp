#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	string str;
	string input = "";
	string output="";
	stack<char> stk1;
	cin >> n; //입력받을 문자열 개수 입력받음

	for (int i = 1; i <= n; i++) {
		if (i == 1) { cin.ignore(); }
		getline(cin, str);//문자열 입력받기
		input += str + "\n"; 
	}//문자열+ "\n" + 문자열.... 해서 input에 저장
	
	for (int i = 0; i < input.size(); i++) {

		if ((input[i] != ' ')&& (input[i]!='\n')) {//input이 문자일때
			stk1.push(input[i]);
		}
		else {//stack을 거꾸로뒤집어서 output에 더하기
			int size = stk1.size();
				for (int j = 0; j < size; j++) {
					output += stk1.top();
					stk1.pop();
				}
				if (input[i] == ' ') { output += ' '; }
				else if (input[i] == '\n' && i < input.size() - 1) { output += "\n"; }
				while (!stk1.empty()) { stk1.pop(); }
			}


	}
	cout << output;
	return 0;
}