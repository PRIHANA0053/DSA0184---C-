#include <iostream>

int main() {
    const int arraySize = 5;
    float floatArray[arraySize] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Values in the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Value " << i+1 << ": " << floatArray[i] << std::endl;
    }

    return 0;
}

