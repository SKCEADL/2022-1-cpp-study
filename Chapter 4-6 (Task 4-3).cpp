/* ���� ���� ���α׷��� �ۼ��϶�. ��Ģ������ ��Ÿ���� ������ �ϳ��� 
�� �����ڷ� ����ؾ��ϴ� �ΰ��� ���� �Է����� �ް� ����� ����ϴ� ���� ���α׷��̴�.*/
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	char x;
	int num1, num2;

	cout << "ù��° ���� �Է��Ͻÿ� :";
	cin >> num1;
	cout << "�ι�° ���� �Է��Ͻÿ� :";
	cin >> num2;

	cout << "�����ڸ� �Է��Ͻÿ� :";
	cin >> x;

	if (x == '+') {
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	}
	else if (x == '-') {
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	}
	else if (x == '*') {
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	}
	else if (x == '/') {
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	}
	else {
		cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
	}
}