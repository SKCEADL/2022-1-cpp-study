//if문 (수 제한하기)
#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	if (x < 10)
	{
		cout << "You entered a value less than 10"
			<< '\n';
	}
}
