#include <iostream>

using namespace std;

int main()
{
	double num1;
	double sum = 0;

	do
	{
		cout << "���� �Է�: ";
		cin >> num1;
		sum += num1;
	} while (num1 != 0);

	cout << "���ڵ��� ��: " << sum;

}