//문자열 비교 - 패스워드 확인기
#include <iostream>
#include <string>	//문자열에 사용

using namespace std;

int main()
{
	string password;

	cout << "Enter your password: " << " \n ";
	getline(cin, password, '\n');
	if (password == "xyzzy")	//패스워드 xyzzy와 비교
	{
		cout << "Bad password. Denied access!" << "\n";
		return 0;	//입력된 패스워드와 같지않으면 종료.

	}
}