#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum;
    cout << "�����ؼ� ���� ���� �Է��ϼ���.\n";
    cout << "����� ��ġ���� 0�� �з��ϼ���.\n";
    while(1){
        cin >> n;
        if(n==0){
            break;
        }
        sum=sum+n;
    }
    cout << sum;
}
