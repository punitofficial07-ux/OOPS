#include <iostream>
using namespace std;
class Counter {
public:
    static int count;
};

int Counter::count = 0; // must define static member outside class

int main() {
    Counter::count = 5; // access without creating an object
    cout << "Count: " << Counter::count << endl; // output: Count: 5
}
