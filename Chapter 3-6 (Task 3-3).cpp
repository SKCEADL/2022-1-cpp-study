/* 사용자에게서 두 수를 입력받아 나눗셈을 수행하고 정확한 결과를 출력하는 프로그램을 작성하라.
단, 입력하는 수가 정수일 때와 실수일 때 모두를 테스트 할 수 있어야 한다.*/
#include <iostream>

using namespace std;
int main() {
	int number1;
	int number2;

	cout << "첫번째 정수를 입력하시오 :";
	cin >> number1;
	cout << "두번째 정수를 입력하시오 :";
	cin >> number2;

	cout << number1 << "/" << number2 
		<< "=" << number1 / number2 << endl;

	double number3;
	double number4;

	cout << "첫번째 실수를 입력하시오 :";
	cin >> number3;
	cout << "두번째 실수를 입력하시오 :";
	cin >> number4;

	cout << number3 << "/" << number4 
		<< "=" << number3 / number4;


}