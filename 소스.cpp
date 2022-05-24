#include <iostream>	//전처리 지시자

using namespace std;

int main() //main함수 (프로그램의 시작)
{

	int thisisanumber;	//변수 선언

	cout << "Please enter a number: ";	//cout은 출력 (다음은 <<사용)
	cin >> thisisanumber;	//cin은 입력 (다음은 >>사용)
	cout << "You entered: " << thisisanumber << "\n";	// \n은 endl처럼 줄바꿈
}

// 입력한 숫자를 출력해주는 프로그램