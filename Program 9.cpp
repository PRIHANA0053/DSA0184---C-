#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    int rounded_down = floor(num);
    int rounded_up = ceil(num);
    cout << "Original number: " << num << endl;
    cout << "Rounded down: " << rounded_down << endl;
    cout << "Rounded up: " << rounded_up << endl;

    return 0;
}
