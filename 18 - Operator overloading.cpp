#include <iostream>
#include <cmath>

using namespace std;

// Overloaded function to find the absolute value of an integer number
int absolute(int num) {
    return abs(num);
}

// Overloaded function to find the absolute value of a floating-point number
double absolute(double num) {
    return fabs(num);
}

int main() {
    int intNum = -5;
    double doubleNum = -7.5;

    // Calculate absolute value of an integer number
    cout << "Absolute value of " << intNum << " is: " << absolute(intNum) << endl;

    // Calculate absolute value of a floating-point number
    cout << "Absolute value of " << doubleNum << " is: " << absolute(doubleNum) << endl;

    return 0;
}
