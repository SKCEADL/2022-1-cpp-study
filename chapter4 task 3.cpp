#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x;
    float y;
    int num;
    cout << "어떤 계산을 하시겠습니까?\n";
    cout << "1.덧셈, 2.뺄셈, 3.곱셈, 4.나눗셈\n";
    cin >> num;
    cout << "첫 번째 수를 입력하세요.\n";
    cin >> x;
    cout << "두 번째 수를 입력하세요.\n";
    cin >> y;
    if(num==1){
        cout << "결과는" << x+y << "입니다.";
    }
    else if(num==2){
        cout << "결과는" << x-y << "입니다.";
    }
    else if(num==3){
        cout << "결과는" << x*y << "입니다.";
    }
    else if(num==4){
        cout << "결과는" << x/y << "입니다.";
    }
    else{
        cout << "잘못된 숫자입니다.";
    }
}
