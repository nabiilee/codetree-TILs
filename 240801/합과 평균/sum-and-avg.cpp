#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int c;
    c = a + b;
    cout << fixed;
    cout.precision(1);
    
    double d;
    d = (double) (a + b) / 2;

    cout << c << " " << d;

    return 0;
}