#include <iostream>
using namespace std;
int main() {
    int size, target, count = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value to find its occurrences: ";
    cin >> target;

    // Count the occurrences of the target value
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }

    // Output the number of occurrences of the target value
    cout << "Number of occurrences of " << target << " in the array: " << count << endl;

    return 0;
}
