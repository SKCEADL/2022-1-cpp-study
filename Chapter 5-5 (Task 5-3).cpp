/* C++ 더쉽게 더 깊게 p. 86
3. 사용자가 입력하는 수를 누적하며 더하는 프로그램을 작성하라. 단, 프로그램은 사용자가 0을 입력하면 종료해야 한다.*/

#include <iostream>

using namespace std;

int main()
{

	int num;	// 변수선언 (입력할 값)
	int num2 = 0;
	while (1) 
	{
		cout << " Enter your number: ";
		cin >> num;
		num2 += num;	// 계속하여 더함
		if (num != 0)	// 0이 아닐경우
		{
			cout << " 숫자의 합: " << num2 << '\n';	// 더해진 값을 중간에 보여줌
		}
		if (num == 0)	//0일 경우
		{
			break;	// 프로그램 종료
		}
	}
	cout << " 숫자의 합 : " << num2;	//최종 결과 값 출력
}
