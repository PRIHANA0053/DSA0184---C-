#include <iostream>

using namespace std;

// Overloaded function to find the maximum of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded function to find the maximum of two floating-point numbers
float findMax(float a, float b) {
    return (a > b) ? a : b;
}

// Overloaded function to find the maximum of two characters
char findMax(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    // Integer values
    int intNum1 = 5, intNum2 = 7;

    // Floating point values
    float floatNum1 = 3.5, floatNum2 = 4.8;

    // Character values
    char char1 = 'a', char2 = 'b';

    // Finding the maximum of two integers
    int maxInt = findMax(intNum1, intNum2);
    cout << "Maximum of integers: " << maxInt << endl;

    // Finding the maximum of two floating-point numbers
    float maxFloat = findMax(floatNum1, floatNum2);
    cout << "Maximum of floating-point numbers: " << maxFloat << endl;

    // Finding the maximum of two characters
    char maxChar = findMax(char1, char2);
    cout << "Maximum of characters: " << maxChar << endl;

    return 0;
}
