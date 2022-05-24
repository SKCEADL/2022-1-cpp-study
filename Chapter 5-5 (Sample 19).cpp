// 루프 중첩, 구구단 출력 프로그램
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)	// i 변수선언, 0에서 10미만까지 1씩 증가하며 반복
	{
		cout << '\t' << i;	// \t 는 탭 문자 (출력을 가지런히 함.)
	}

	cout << '\n';

	for (int i = 0; i < 10; ++i)
	{
		cout << i;

		for (int j = 0; j < 10; ++j)	// j 변수선언, 0에서 10 미만까지 1씩 증가하며 반복
		{
			cout << '\t' << i * j;
		}
		cout << '\n';
	}
}