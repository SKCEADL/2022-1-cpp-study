// else - if ��
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num < 0)	//if���� ������ ����, ������ 0�̶�� else if�� ����
	{
		cout << "You entered a negative number\n";
	}
	else if (num == 0)	
	{
		cout << "You entered a positive number\n";
	}
}