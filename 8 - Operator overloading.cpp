#include <iostream>

using namespace std;

class MySubtractor {
private:
    int value;

public:
    // Constructor
    MySubtractor(int v) : value(v) {}

    // Overloading - operator as a member function
    MySubtractor operator-(const MySubtractor& other) {
        int result = value - other.value;
        return MySubtractor(result);
    }

    // Method to get the value
    int getValue() const {
        return value;
    }
};

int main() {
    MySubtractor num1(10);
    MySubtractor num2(5);

    // Subtracting two MySubtractor objects using overloaded -
    MySubtractor difference = num1 - num2;

    cout << "Difference of num1 and num2: " << difference.getValue() << endl;

    return 0;
}
