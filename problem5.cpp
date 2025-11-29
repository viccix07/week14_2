#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    if (!file) {
        try {
            throw "File not found";
        }
        catch (const char* a) {
            cout << a << endl;
        }
    }
    else {
        int f;
        file >> f;
        cout << f;
    }
    return 0;
}