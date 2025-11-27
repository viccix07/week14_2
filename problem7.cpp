#include <iostream>
using namespace std;
int main(){
    int b;
    cin >> b;
    try{
        if(b == 0) throw b;
        if(b < 0) throw "Negative";
        cout << "Valid" << endl;
    }
    catch(int msg) {
        cout << "Error: "<<msg;
    }
    catch(const char* msg){
        cout << msg;
    }
    return 0;
}
