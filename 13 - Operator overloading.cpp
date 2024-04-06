#include <iostream>

using namespace std;

// Class for Matrix
class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        // Dynamically allocate memory for matrix
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix() {
        // Free dynamically allocated memory
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        Matrix result(rows, cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter elements of matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << "Enter element at position [" << i << "][" << j << "]: ";
                cin >> data[i][j];
            }
        }
    }

    // Function to display matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// Function to calculate sum of two arrays
int* sumArrays(int arr1[], int arr2[], int size) {
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    return result;
}

int main() {
    // Matrix addition
    Matrix m1(2, 2), m2(2, 2);

    cout << "Enter elements for first matrix:" << endl;
    m1.inputMatrix();

    cout << "Enter elements for second matrix:" << endl;
    m2.inputMatrix();

    Matrix sumMatrix = m1 + m2;
    cout << "Sum of matrices:" << endl;
    sumMatrix.displayMatrix();

    // Array addition
    const int size = 3;
    int arr1[size] = {1, 2, 3};
    int arr2[size] = {4, 5, 6};

    cout << "Sum of arrays:" << endl;
    int* sumArr = sumArrays(arr1, arr2, size);
    for (int i = 0; i < size; ++i) {
        cout << sumArr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory for array
    delete[] sumArr;

    return 0;
}
