/* C++ ������ �� ���� p. 86
3. ����ڰ� �Է��ϴ� ���� �����ϸ� ���ϴ� ���α׷��� �ۼ��϶�. ��, ���α׷��� ����ڰ� 0�� �Է��ϸ� �����ؾ� �Ѵ�.*/

#include <iostream>

using namespace std;

int main()
{

	int num;	// �������� (�Է��� ��)
	int num2 = 0;
	while (1) 
	{
		cout << " Enter your number: ";
		cin >> num;
		num2 += num;	// ����Ͽ� ����
		if (num != 0)	// 0�� �ƴҰ��
		{
			cout << " ������ ��: " << num2 << '\n';	// ������ ���� �߰��� ������
		}
		if (num == 0)	//0�� ���
		{
			break;	// ���α׷� ����
		}
	}
	cout << " ������ �� : " << num2;	//���� ��� �� ���
}