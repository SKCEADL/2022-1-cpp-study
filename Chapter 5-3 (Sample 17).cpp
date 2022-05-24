// do - while 루프문, 비밀번호가 맞을때까지 실행(반복)되는 프로그램
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;	//문자열 변수선언
	do
	{
		cout << "Please enter your password: ";
		cin >> password;
	} while (password != "foobar");
	cout << "Welcome, you got the password right";
}