#include <iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int d) : data(d) {}

    // Overloading << operator as a friend function
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass obj(42);
    
    // Using overloaded << operator to print the contents of the object
    cout << "Object contents: " << obj << endl;

    return 0;
}
