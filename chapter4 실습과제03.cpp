#include <iostream>
#include <string>

using namespace std;

int main() {
	char op;
	int num1,num2 ;

	cout << "ù��° ���� �Է��Ͻÿ� :";
	cin >> num1;
	cout << "�ι�° ���� �Է��Ͻÿ� :";
	cin >> num2;

	cout << "�����ڸ� �Է��Ͻÿ� :";
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