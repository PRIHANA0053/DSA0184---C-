#include <iostream>

using namespace std;

int main() {
    int size, sum_main = 0, sum_secondary = 0;

    // Input the size of the square matrix
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int matrix[size][size];

    // Input elements of the square matrix
    cout << "Enter elements of the square matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    for (int i = 0; i < size; ++i) {
        sum_main += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < size; ++i) {
        sum_secondary += matrix[i][size - i - 1];
    }

    // Output the sum of diagonals
    cout << "Sum of the main diagonal: " << sum_main << endl;
    cout << "Sum of the secondary diagonal: " << sum_secondary << endl;

    return 0;
}
