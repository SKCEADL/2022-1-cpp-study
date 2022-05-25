#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x, y, result;
    string op;
    cout << "첫번째 정수를 입력하시오: ";
    cin >> x;
    cout << "연산자를 입력하시오(+, -, *, / 중 택 1): ";
    cin >> op;
    cout << "두번째 정수를 입력하시오: ";
    cin >> y;

    if (op == "+")
    {
        result = x + y;
        cout << "x + y = " << result << " 입니다. \n";
    }
    else if (op == "-")
    {
        result = x - y;
        cout << "x - y = " << result << " 입니다. \n";
    }
    else if (op == "*")
    {
        result = x * y;
        cout << "x * y = " << result << " 입니다. \n";
    }
    else if (op == "/")
    {
        result = x / y;
        cout << "x / y = " << result << " 입니다. \n";
    }
    else
    {
        cout << "지원하지 않는 식입니다. \n";
        return 0;
    }
}