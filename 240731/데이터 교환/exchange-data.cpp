#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 5;
    int b = 6;
    int c = 7;
    int temp = b;

    
    a = c; //a == 7 a에 c값 넣기
    c = temp; // c에 b값 넣기
    b = a;//b == 5 b에 a값 넣기
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;




    return 0;
}