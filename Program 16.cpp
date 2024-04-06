#include <iostream>
using namespace std;
int main() {
    int start = 1;
    int end = 10;
    for (int i = start; i <= end; ++i) {
        for (int j = start; j <= end; ++j) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
