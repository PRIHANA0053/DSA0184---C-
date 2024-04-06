#include <iostream>
using namespace std;
int main() {
    int size, pos;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;
    if (pos <= 0 || pos > size) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the left starting from the position to be deleted
    for (int i = pos - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;

    // Output the updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
