#include <iostream>
Using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
bool isStrong(int n) {
    int originalNum = n;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrong(num))
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;

    return 0;
