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
	cin >> n; //�Է¹��� ���ڿ� ���� �Է¹���

	for (int i = 1; i <= n; i++) {
		if (i == 1) { cin.ignore(); }
		getline(cin, str);//���ڿ� �Է¹ޱ�
		input += str + "\n"; 
	}//���ڿ�+ "\n" + ���ڿ�.... �ؼ� input�� ����
	
	for (int i = 0; i < input.size(); i++) {

		if ((input[i] != ' ')&& (input[i]!='\n')) {//input�� �����϶�
			stk1.push(input[i]);
		}
		else {//stack�� �Ųٷε���� output�� ���ϱ�
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