#include<iostream>

using namespace std;

int main()
{
	float a, b, sum;
	cout << "분자를 입력하시오: ";
	cin >> a;
	cout << "분모를 입력하시오: ";
	cin >> b;

	sum = a / b;
	cout << "나눗셈의 결과는 " << sum << " 입니다.";

}
