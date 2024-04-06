#include <iostream>
using namespace std;
int main() {
    int num, originalNum, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    if (originalNum % sum == 0)
        cout << originalNum << " is a Harshad number." << endl;
    else
        cout << originalNum << " is not a Harshad number." << endl;

    return 0;
}
