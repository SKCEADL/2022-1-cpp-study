// break 문 , 루프를 즉시 빠져나옴, 패스워드가 맞을 때까지 반복되는 프로그램
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
		if (password == "foobar")	//패스워드
		{
			break;	//패스워드가 foobar라면, 즉시 빠져나옴
		}
	}
	cout << "Welcome, you got the password right";
}