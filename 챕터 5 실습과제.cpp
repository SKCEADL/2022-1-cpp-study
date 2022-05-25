#include <iostream>

using namespace std;

int main()
{
	double num1;
	double sum = 0;

	do
	{
		cout << "숫자 입력: ";
		cin >> num1;
		sum += num1;
	} while (num1 != 0);

	cout << "숫자들의 합: " << sum;

}