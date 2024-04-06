#include <iostream>
using namespace std;

class Largest {
private:
    int a, b, m;

public:
    // Member function to set data
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    // Friend function to find the maximum number
    friend void find_Max(Largest obj);
};

// Function to find the maximum number
void find_Max(Largest obj) {
    if (obj.a > obj.b) {
        cout << "Maximum no is " << obj.a << endl;
    } else {
        cout << "Maximum no is " << obj.b << endl;
    }
}

int main() {
    Largest obj;

    int num1, num2;

    // Input numbers from the user
    cout << "Enter the first no: ";
    cin >> num1;
    cout << "Enter the second no: ";
    cin >> num2;

    // Set data using member function
    obj.setData(num1, num2);

    // Call friend function to find the maximum number
    find_Max(obj);
    return 0;
}

