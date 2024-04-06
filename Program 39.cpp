#include <iostream>
using namespace std;
int main() {
    int size;
    double sum = 0;
    double average;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate the average of all elements
    average = sum / size;

    // Output the average of all elements
    cout << "Average of all elements in the array: " << average << endl;

    return 0;
}
