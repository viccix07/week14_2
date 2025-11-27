#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Size of an array ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Index"<<endl;
    int ind;
    cin >> ind;
    try {
        if(ind >size-1) throw "Out of range";
        cout << arr[ind] << endl;
    }
    catch (const char* msg){
        cout << msg;
    }
    return 0;
}
