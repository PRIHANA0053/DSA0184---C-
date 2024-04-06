#include <iostream>
#include <cmath>

using namespace std;

// Overloaded function to calculate power of an integer number
int power(int base, int exponent) {
    return static_cast<int>(pow(base, exponent));
}

// Overloaded function to calculate power of a floating-point number
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int intBase = 2, intExponent = 3;
    double doubleBase = 2.5, doubleExponent = 2.0;

    // Calculate power of an integer number
    cout << "Power of " << intBase << " raised to the power of " << intExponent << " is: "
         << power(intBase, intExponent) << endl;

    // Calculate power of a floating-point number
    cout << "Power of " << doubleBase << " raised to the power of " << doubleExponent << " is: "
         << power(doubleBase, doubleExponent) << endl;

    return 0;
}
