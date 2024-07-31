#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    /*
    실수 값을 갖는 변수의 경우 소수점 자리를 맞춰 출력하는 경우가 대다수
    cout << fixed : 소수점 자리 표현을 고정하겠다는 뜻
    cout.precision(n): 소수점 n째 자리까지 표현
    추의 무게 곱하기 달에서 중력의 ㅂ율
    실수값은 전부 소숫점 6째짜리

    */
    
    cout.precision(6);
    int a = 13;
    double b = 0.165000;
    
    double sum = a*b;
    cout << a << " * " << b << " = " << sum;

    return 0;
}