#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, d, e, f;
    cin >> a >> b >> c;

    //세 정수의 합과 평균
    d = a+b+c;
    e = (double) (a+b+c)/3;



    //세 정수의 합에서 평균을 뺀 값
    f = d - e;
    cout << d;
    cout << e;
    cout << f;



    return 0;
}