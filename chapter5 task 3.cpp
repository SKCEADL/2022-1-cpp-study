#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum;
    cout << "누적해서 더할 수를 입력하세요.\n";
    cout << "계산을 마치려면 0을 압력하세요.\n";
    while(1){
        cin >> n;
        if(n==0){
            break;
        }
        sum=sum+n;
    }
    cout << sum;
}
