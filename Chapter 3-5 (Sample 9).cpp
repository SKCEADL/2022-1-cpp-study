#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_first_name;	//문자열 선언 (이름)
	string user_last_name;	//문자열 선언 (성)

	cout << "Please enter your first name: ";
	cin >> user_first_name;
	cout << "Please enter your last name: ";
	cin >> user_last_name;
	string user_full_name =
		user_first_name + " " + user_last_name;	//문자열 선언

	cout << "Your name is: " << user_full_name << "\n";
}

//성과 이름을 입력하여 전체 이름을 출력해주는 프로그램