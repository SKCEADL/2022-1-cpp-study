/* ����ڿ��Լ� �� ���� �Է¹޾� �������� �����ϰ� ��Ȯ�� ����� ����ϴ� ���α׷��� �ۼ��϶�.
��, �Է��ϴ� ���� ������ ���� �Ǽ��� �� ��θ� �׽�Ʈ �� �� �־�� �Ѵ�.*/
#include <iostream>

using namespace std;
int main() {
	int number1;
	int number2;

	cout << "ù��° ������ �Է��Ͻÿ� :";
	cin >> number1;
	cout << "�ι�° ������ �Է��Ͻÿ� :";
	cin >> number2;

	cout << number1 << "/" << number2 
		<< "=" << number1 / number2 << endl;

	double number3;
	double number4;

	cout << "ù��° �Ǽ��� �Է��Ͻÿ� :";
	cin >> number3;
	cout << "�ι�° �Ǽ��� �Է��Ͻÿ� :";
	cin >> number4;

	cout << number3 << "/" << number4 
		<< "=" << number3 / number4;


}