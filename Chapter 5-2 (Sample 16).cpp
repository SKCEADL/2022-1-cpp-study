// for 루프, 0에서 10미만 까지 자승(제곱) 프로그램, while 보다 간결
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)	//i는 루프가 진행 된 뒤에 1씩 증가, i가 10이 되면 루프 종료
	{
		cout << i << " squared is " << i * i << endl;
	}
}