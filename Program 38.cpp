#include <iostream>
using namespace std;
int main() {
    int size;
    int sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
