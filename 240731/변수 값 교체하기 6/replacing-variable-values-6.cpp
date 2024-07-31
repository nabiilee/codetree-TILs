#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a= 2; 
    int b = 5;
    int temp = b; //b를 임시 변수 temp에 저장
    a = temp; //a == 5
    b = a; //b == 2
    cout << a << endl;
    cout << b << endl;
    


    return 0;
}