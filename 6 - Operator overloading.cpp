#include <iostream>

using namespace std;

class MyArray {
private:
    int *arr;
    int size;

public:
    // Constructor
    MyArray(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1; // Initialize elements
        }
    }

    // Destructor
    ~MyArray() {
        delete[] arr;
    }

    // Overloading [] operator to access elements
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of bounds." << endl;
            // Return the first element in case of out-of-bounds access
            return arr[0];
        }
        return arr[index];
    }
};

int main() {
    const int SIZE = 5;
    MyArray arr(SIZE);

    // Accessing and modifying elements using the overloaded [] operator
    for (int i = 0; i < SIZE + 1; ++i) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
