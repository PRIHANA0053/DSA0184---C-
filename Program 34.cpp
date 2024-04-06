#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows (odd number): ";
    cin >> rows;

    if (rows % 2 == 0) {
        cout << "Please enter an odd number of rows." << endl;
        return 1;
    }
    for (int i = 0; i < rows / 2 + 1; ++i) {
        for (int j = 0; j < rows / 2 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows / 2 - 1; i >= 0; --i) {
        for (int j = 0; j < rows / 2 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
