#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum;
    cin >> a;
    cin >> b;

    sum = a + b;

    cout << fixed;
    cout.precision(2);
    cout << sum;
    return 0;
}