#include <iostream>

using namespace std;

// Function to check eligibility for voting
void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
        int yearsLeft = 18 - age;
        cout << "You need to wait " << yearsLeft << " more years to be eligible." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check eligibility for voting
    checkEligibility(age);
}
