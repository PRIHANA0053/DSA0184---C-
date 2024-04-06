#include <iostream>
using namespace std;
int main() {
    int num, square, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    square = num * num;
    while (square > 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }
    if (sum == num)
        cout << num << " is a Neon number." << endl;
    else
        cout << num << " is not a Neon number." << endl;

    return 0;
}
