#include <iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    try{
        if(a.size() > 10) throw "Too long!";
        cout << a;
    }
    catch(const char* msg){
        cout << msg;
    }
    return 0;
}
