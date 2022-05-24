// else - if 문
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num < 0)	//if문이 양수라면 무시, 음수나 0이라면 else if문 실행
	{
		cout << "You entered a negative number\n";
	}
	else if (num == 0)	
	{
		cout << "You entered a positive number\n";
	}
}