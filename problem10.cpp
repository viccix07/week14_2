#include <iostream>
#include <exception>
using namespace std;

void testFunction() {
    throw runtime_error("Test exception");
}

int main() {
    try {
        testFunction();
    }
    catch (const exception& e) {
        cout << "Exception caught" << endl;
    }
    cout << "Done" << endl;
    return 0;
}