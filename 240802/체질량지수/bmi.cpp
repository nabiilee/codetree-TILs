#include <iostream>
#include <iomanip>  // For std::setprecision

using namespace std;

int main() {
    double height, weight, bmi;

    // Input height in cm and weight in kg
    cout << "Enter your height in centimeters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Calculate BMI
    bmi = weight / (height / 100 * height / 100);

    // Output BMI
    cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;

    // Determine if the person is obese
    if (bmi >= 25) {
        cout << "According to the BMI classification, this is considered obesity." << endl;
    } else {
        cout << "Your BMI is within the normal range." << endl;
    }

    return 0;
}