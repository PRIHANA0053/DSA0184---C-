#include <iostream>
using namespace std;

class Number {
protected:
    int m, n, k;

public:
    // Constructor to initialize m, n, and k
    Number(int m, int n, int k) {
        this->m = m;
        this->n = n;
        this->k = k;
    }

    // Virtual function to print numbers
    virtual void printNumbers() = 0;
};

class Skipper : public Number {
public:
    // Constructor to initialize m, n, and k using base class constructor
    Skipper(int m, int n, int k) : Number(m, n, k) {}

    // Overriding the printNumbers function to print numbers from m to n by skipping k numbers in between
    void printNumbers() override {
        for (int i = m; i <= n; i += k) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    int m, n, k;

    // Input values of m, n, and k
    cout << "Enter the value of M: ";
    cin >> m;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Enter the value of K: ";
    cin >> k;

    // Create an object of Skipper class
    Skipper skipper(m, n, k);

    // Call the printNumbers function to print the numbers
    cout << "Numbers from " << m << " to " << n << " skipping " << k << " numbers in between: ";
    skipper.printNumbers();
    return 0;
}

