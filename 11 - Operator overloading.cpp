#include <iostream>

using namespace std;

class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int v) : value(v) {}

    // Overloading += operator as a member function
    void operator+=(const MyNumber& other) {
        value += other.value;
    }

    // Method to get the value
    int getValue() const {
        return value;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(7);

    // Adding num2 to num1 using overloaded +=
    num1 += num2;

    cout << "Sum of num1 and num2: " << num1.getValue() << endl;

    return 0;
}
