#include <iostream>
#include <string>

using namespace std;

int main()
{
	char b;
	double num1, num2;

	cout << "ù ��° �� �Է�:";
	cin >> num1;
	cout << "�� ��° �� �Է�: ";
	cin >> num2;

	cout << "������ �Է�: ";
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
		cout << "�Է� ���� �����ڷ� ��� �� �� ����";
}