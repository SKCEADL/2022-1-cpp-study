// while 루프, i를 0부터 10 미만까지 1씩 더하는 프로그램 (조건이 없다면 무한루프)
#include <iostream>

using namespace std;

int main()
{
	int i = 0;	//변수선언

	while (i < 10)	//조건추가 (변수의 범위제한)
	{
		cout << i << '\n';
		i++;	//변수를 1씩 더함.
	}
}