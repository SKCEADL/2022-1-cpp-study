#include <iostream>
#include <string>

using namespace std;

int main()
{
	char b;
	double num1, num2;

	cout << "첫 번째 수 입력:";
	cin >> num1;
	cout << "두 번째 수 입력: ";
	cin >> num2;

	cout << "연산자 입력: ";
	cin >> b;

	if (b == '+')
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	else if (b == '-')
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	else if (b == '/')
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	else if (b == '*')
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	else
		cout << "입력 받은 연산자로 계산 할 수 없음";
}