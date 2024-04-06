#include <iostream>
using namespace std;
int main() {
    int size, pos, newValue;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size + 1]; 
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the position where you want to insert the new element: ";
    cin >> pos;
    cout << "Enter the value of the new element: ";
    cin >> newValue;
    for (int i = size; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = newValue;
    ++size;
    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
