#include <iostream>
#include <string>

using namespace std;

class ReverseString {
    string originalString;
    string reversedString;
    
public:
 
    ReverseString() {}

    ReverseString(const string& str) : originalString(str) {
        reverseString();
    }

    void reverseString() {
        int n = originalString.length();
        reversedString = originalString;
        for (int i = 0; i < n / 2; i++) {
            char temp = reversedString[i];
            reversedString[i] = reversedString[n - i - 1];
            reversedString[n - i - 1] = temp;
        }
    }

    // Function to display the reversed string
    void displayReversedString() {
        cout << "Original String: " << originalString << endl;
        cout << "Reversed String: " << reversedString << endl;
    }
};

int main() {
    // Create an object of ReverseString class with string parameter
    ReverseString rs("Hello, World!");

    // Display the reversed string
    rs.displayReversedString();
}

