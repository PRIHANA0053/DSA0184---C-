#include <iostream>

using namespace std;

// Overloaded function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int intNum1 = 5, intNum2 = 7;
    float floatNum1 = 3.5, floatNum2 = 4.8;

    // Adding two integers
    int sumIntegers = add(intNum1, intNum2);
    cout << "Sum of integers: " << sumIntegers << endl;

    // Adding two floating-point numbers
    float sumFloats = add(floatNum1, floatNum2);
    cout << "Sum of floating-point numbers: " << sumFloats << endl;

    return 0;
}
