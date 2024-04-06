#include <iostream>

using namespace std;

int main() {
    int var1, var2, var3;

    cout << "Enter the value for var1: ";
    cin >> var1;
    cout << "Enter the value for var2: ";
    cin >> var2;
    cout << "Enter the value for var3: ";
    cin >> var3;

    // Print the addresses of the variables
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;
    return 0;
}
