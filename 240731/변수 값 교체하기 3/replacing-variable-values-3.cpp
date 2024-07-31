#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 3;
    int b = 5;
    //두 값을 교환하여 a,b를 출력 
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}