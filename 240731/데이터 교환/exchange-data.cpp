#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 5;
    int b = 6;
    int c = 7;

    b = a;
    c = b;
    a = c;

    cout << a << "\n" << b << "\n" << c << "\n" << " ";


    return 0;
}