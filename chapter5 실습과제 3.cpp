// ����ڰ� �Է��ϴ� ���� �����Ͽ� ���ϴ� ���α׷� �ۼ�. 0�� �Է��ϸ� ����.
#include<iostream>

using namespace std;

int main()
{
	int x, sum;
	x = 1; 
	sum = 0;

	while (x != 0)
	{
		cout << "������ �Է��Ͻÿ�: ";
		cin >> x;
		sum += x;
	}
	cout << "�Էµ� ������ ���� " << sum << " �Դϴ�. \n";
}