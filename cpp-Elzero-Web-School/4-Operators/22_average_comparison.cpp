#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float num1, num2, num3, average;
    const float limit = 50.0;

    // Input values
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate average
    average = (num1 + num2 + num3) / 3;

    // Output average and comparison
    cout << "Average = " << average << "\n";
    if (average > limit) {
        cout << "The average is above the limit.\n";
    } else {
        cout << "The average is below the limit.\n";
    }

    return 0;
}
