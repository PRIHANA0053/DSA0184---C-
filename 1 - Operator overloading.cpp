#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    Counter() : count(0) {}
    void operator++() {
        count++;
    }
    int getCount() const {
        return count;
    }
};

int main() {
    Counter c;

    // Increment the counter using overloaded ++
    ++c;
    cout << "Count after first increment: " << c.getCount() << endl;

    // Increment the counter again using overloaded ++
    ++c;
    cout << "Count after second increment: " << c.getCount() << endl;

    return 0;
}
