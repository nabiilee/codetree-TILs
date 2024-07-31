#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft;
    cin >> ft;
    //ft를 cm로 환산하기
    double ft_cm;
    cout << fixed;
    cout.precision(1);
    
    ft_cm = ft * 30.48;
    cout << ft_cm;
    
    return 0;
}