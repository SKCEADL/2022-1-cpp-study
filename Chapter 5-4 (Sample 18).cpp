// break �� , ������ ��� ��������, �н����尡 ���� ������ �ݺ��Ǵ� ���α׷�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;
	while (1)
	{
		cout << "Please enter your password: ";
		cin >> password;
		if (password == "foobar")	//�н�����
		{
			break;	//�н����尡 foobar���, ��� ��������
		}
	}
	cout << "Welcome, you got the password right";
}