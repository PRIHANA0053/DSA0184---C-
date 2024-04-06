#include <iostream>
#include <cmath>

using namespace std;

// Overloaded function to find factorial of an integer number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Overloaded function to find factorial of a floating-point number using Gamma function
double factorial(double x) {
    return tgamma(x + 1);
}

int main() {
    int intNum = 5;
    double doubleNum = 5.5;

    // Calculate factorial of an integer number
    cout << "Factorial of " << intNum << " is: " << factorial(intNum) << endl;

    // Calculate factorial of a floating-point number
    cout << "Factorial of " << doubleNum << " is: " << factorial(doubleNum) << endl;

    return 0;
}
