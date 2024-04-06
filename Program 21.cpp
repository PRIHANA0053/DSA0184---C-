#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int gcd;
    do {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    } while (num2 != 0);
    cout << "GCD of " << num1 << " and " << num2 << " is " << num1 << endl;
    return 0;
}
