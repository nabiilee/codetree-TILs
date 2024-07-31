#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //1피트는 30.48cm
    //1마일은 160934cm
    //피트와 마일을 각각 cm로 변환하고
    double pt = 9.2;//피트
    double mile = 1.3;//마일

    double ptCm = pt * 30.48;
    double mileCm = mile * 160934;

    //소숫점 첫째짜리까지만 출력하기 위한 용도
    cout << fixed;
    cout.precision(1);


    cout << pt << "ft = " << ptCm << "cm" << endl;
    cout << mile << "mi = " << mileCm << "cm" << endl;


    return 0;
}