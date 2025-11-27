#include <iostream>
#include <exception>

using namespace std;

class MyError : public exception {
public:
    const char* what() const noexcept override {
        return "Odd number error!";
    }
};
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    try {
        if (n % 2 != 0) {
            throw MyError();
        } else {
            cout << "Even" << endl;
        }
    }
    catch (const MyError& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}