#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    try{
        if(a > 100) throw a;
    }
    catch(int msg){
        cout << "Error: "<<msg;
    }
    return 0;
}
