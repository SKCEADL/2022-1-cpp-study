// do - while ������, ��й�ȣ�� ���������� ����(�ݺ�)�Ǵ� ���α׷�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;	//���ڿ� ��������
	do
	{
		cout << "Please enter your password: ";
		cin >> password;
	} while (password != "foobar");
	cout << "Welcome, you got the password right";
}