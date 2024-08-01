#include <iostream>
#include <iomanip> // For std::setprecision and std::fixed

using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // Input two integers, a and b

    // Compute the sum and difference
    int sum = a + b;
    int difference = a - b;

    // Calculate the division of sum by difference
    double result = static_cast<double>(sum) / difference;

    // Output the result rounded to two decimal places
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}