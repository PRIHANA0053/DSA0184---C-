#include <iostream>

using namespace std;

class FunctionCaller {
public:
    // Overloaded () operator to call a function with arguments
    void operator()(int a, int b) {
        cout << "Calling function with arguments: " << a << " and " << b << endl;
        int result = add(a, b);
        cout << "Result of adding " << a << " and " << b << " is: " << result << endl;
    }

private:
    // Sample function to add two numbers
    int add(int x, int y) {
        return x + y;
    }
};

int main() {
    FunctionCaller caller;

    // Calling the overloaded () operator with arguments
    caller(3, 4);

    return 0;
}
