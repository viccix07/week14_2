#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    try{
        if(x < 0) throw "Negative values not allowed";
        cout << x * x;
    }
    catch(const char* msg){
        cout << msg;
    }
    return 0;
}