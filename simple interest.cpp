+#include <iostream>
using namespace std;

// Function to calculate simple interest for senior citizen
float calculateInterest(float principal, float rate = 0.12) {
    return (principal * rate);
}

// Function to calculate simple interest for regular customer
float calculateInterest(float principal, float rate, float time) {
    return (principal * rate * time);
}

int main() {
    float principal, rate, time;

    // Input principal amount
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Check if the customer is a senior citizen
    char customerType;
    cout << "Are you a senior citizen? (Y/N): ";
    cin >> customerType;

    if (customerType == 'Y' || customerType == 'y') {
        // Calculate interest for senior citizen
        float interest = calculateInterest(principal);
        cout << "Simple Interest for senior citizen: " << interest << endl;
    } else {
        // Input rate and time for regular customer
        cout << "Enter the rate of interest: ";
        cin >> rate;
        cout << "Enter the time period (in years): ";
        cin >> time;

        // Calculate interest for regular customer
        float interest = calculateInterest(principal, rate, time);
        cout << "Simple Interest for regular customer: " << interest << endl;
    }
    return 0;
}
