#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x;
    float y;
    int num;
    cout << "� ����� �Ͻðڽ��ϱ�?\n";
    cout << "1.����, 2.����, 3.����, 4.������\n";
    cin >> num;
    cout << "ù ��° ���� �Է��ϼ���.\n";
    cin >> x;
    cout << "�� ��° ���� �Է��ϼ���.\n";
    cin >> y;
    if(num==1){
        cout << "�����" << x+y << "�Դϴ�.";
    }
    else if(num==2){
        cout << "�����" << x-y << "�Դϴ�.";
    }
    else if(num==3){
        cout << "�����" << x*y << "�Դϴ�.";
    }
    else if(num==4){
        cout << "�����" << x/y << "�Դϴ�.";
    }
    else{
        cout << "�߸��� �����Դϴ�.";
    }
}
