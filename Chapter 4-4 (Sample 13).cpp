//���ڿ� �� - �н����� Ȯ�α�
#include <iostream>
#include <string>	//���ڿ��� ���

using namespace std;

int main()
{
	string password;

	cout << "Enter your password: " << " \n ";
	getline(cin, password, '\n');
	if (password == "xyzzy")	//�н����� xyzzy�� ��
	{
		cout << "Bad password. Denied access!" << "\n";
		return 0;	//�Էµ� �н������ ���������� ����.

	}
}