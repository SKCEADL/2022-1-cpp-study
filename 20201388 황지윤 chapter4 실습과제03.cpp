#include <iostream>
#include <string>

using namespace std;

int main() {
	char op;
	int num1,num2 ;

	cout << "첫번째 수를 입력하시오 :";
	cin >> num1;
	cout << "두번째 수를 입력하시오 :";
	cin >> num2;

	cout << "연산자를 입력하시오 :";
	cin >> op;

	if (op == '+') {
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	}
	else if (op == '-') {
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	}
	else if (op == '*') {
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	}
	else if (op == '/') {
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	}
	else {
		cout << num1 << "%" << num2 << "=" << num1% num2 << endl;
	}
}