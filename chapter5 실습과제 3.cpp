// 사용자가 입력하는 수를 누적하여 더하는 프로그램 작성. 0을 입력하면 종료.
#include<iostream>

using namespace std;

int main()
{
	int x, sum;
	x = 1; 
	sum = 0;

	while (x != 0)
	{
		cout << "정수를 입력하시오: ";
		cin >> x;
		sum += x;
	}
	cout << "입력된 정수의 합은 " << sum << " 입니다. \n";
}