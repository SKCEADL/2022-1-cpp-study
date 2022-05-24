/* 작은 계산기 프로그램을 작성하라. 사칙연산을 나타내는 연산자 하나와 
이 연산자로 계산해야하는 두개의 수를 입력으로 받고 결과를 출력하는 계산기 프로그램이다.*/
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	char x;
	int num1, num2;

	cout << "첫번째 수를 입력하시오 :";
	cin >> num1;
	cout << "두번째 수를 입력하시오 :";
	cin >> num2;

	cout << "연산자를 입력하시오 :";
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