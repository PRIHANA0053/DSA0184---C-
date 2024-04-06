#include <iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int d) : data(d) {}

    // Overloading == operator as a member function
    bool operator==(const MyClass& other) const {
        return data == other.data;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(5);
    MyClass obj3(10);

    // Comparing obj1 and obj2
    if (obj1 == obj2) {
        cout << "obj1 and obj2 are equal." << endl;
    } else {
        cout << "obj1 and obj2 are not equal." << endl;
    }

    // Comparing obj1 and obj3
    if (obj1 == obj3) {
        cout << "obj1 and obj3 are equal." << endl;
    } else {
        cout << "obj1 and obj3 are not equal." << endl;
    }

    return 0;
}
