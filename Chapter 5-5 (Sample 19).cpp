// ���� ��ø, ������ ��� ���α׷�
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)	// i ��������, 0���� 10�̸����� 1�� �����ϸ� �ݺ�
	{
		cout << '\t' << i;	// \t �� �� ���� (����� �������� ��.)
	}

	cout << '\n';

	for (int i = 0; i < 10; ++i)
	{
		cout << i;

		for (int j = 0; j < 10; ++j)	// j ��������, 0���� 10 �̸����� 1�� �����ϸ� �ݺ�
		{
			cout << '\t' << i * j;
		}
		cout << '\n';
	}
}