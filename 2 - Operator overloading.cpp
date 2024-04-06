#include <iostream>

using namespace std;

class MyNumber {
private:
    int number;

public:
    // Constructor
    MyNumber(int n) : number(n) {}

    // Overloading + operator as a member function
    MyNumber operator+(const MyNumber &other) {
        MyNumber result(number + other.number);
        return result;
    }

    // Method to get the number value
    int getNumber() const {
        return number;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(7);

    // Adding two MyNumber objects using overloaded +
    MyNumber sum = num1 + num2;

    cout << "Sum of num1 and num2: " << sum.getNumber() << endl;

    return 0;
}
