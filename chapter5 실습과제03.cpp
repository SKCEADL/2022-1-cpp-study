#include <iostream>

using namespace std;

int main() {
	int num;
	int sum = 0;
	while (1) {
		cout << "���ϰ� ���� ���� �Է��Ͻÿ� :";
		cin >> num;
		sum += num;
		if (num == 0) {
			break;
		}
	}
	cout << "������ �� :" << sum;
}