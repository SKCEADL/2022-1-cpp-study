#include <iostream>

using namespace std;

int main() {
	int num;
	int sum = 0;
	while (1) {
		cout << "더하고 싶은 수를 입력하시오 :";
		cin >> num;
		sum += num;
		if (num == 0) {
			break;
		}
	}
	cout << "숫자의 합 :" << sum;
}