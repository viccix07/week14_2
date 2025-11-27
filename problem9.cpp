#include <iostream>
using namespace std;
void test(){
    throw "Error!";
}
int main(){
    try{
        test();
    }
    catch(const char*){
        cout << "Caught in main";
    }
    return 0;
}