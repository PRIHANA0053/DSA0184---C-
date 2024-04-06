#include <iostream>

using namespace std;

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Check if the size is valid
    if (size < 2) {
        cout << "Invalid size! Size of the array should be at least 2." << endl;
        return 1;
    }

    int arr[size];

    // Input elements of the array
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Initialize largest and second largest elements
    int largest = arr[0];
    int secondLargest = INT_MIN;

    // Find the largest element in the array
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != INT_MIN) {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }

    return 0;
}
