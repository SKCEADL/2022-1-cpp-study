#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x, y, result;
    string op;
    cout << "ù��° ������ �Է��Ͻÿ�: ";
    cin >> x;
    cout << "�����ڸ� �Է��Ͻÿ�(+, -, *, / �� �� 1): ";
    cin >> op;
    cout << "�ι�° ������ �Է��Ͻÿ�: ";
    cin >> y;

    if (op == "+")
    {
        result = x + y;
        cout << "x + y = " << result << " �Դϴ�. \n";
    }
    else if (op == "-")
    {
        result = x - y;
        cout << "x - y = " << result << " �Դϴ�. \n";
    }
    else if (op == "*")
    {
        result = x * y;
        cout << "x * y = " << result << " �Դϴ�. \n";
    }
    else if (op == "/")
    {
        result = x / y;
        cout << "x / y = " << result << " �Դϴ�. \n";
    }
    else
    {
        cout << "�������� �ʴ� ���Դϴ�. \n";
        return 0;
    }
}