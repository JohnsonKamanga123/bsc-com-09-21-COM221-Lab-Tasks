#include <iostream>

using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer with the address of firstValue
    pPointer = &firstValue;
    //indirection
    *pPointer = 10;

    //assign pointer with the address of secondValue
    pPointer = &secondValue;
    //indirection'
    *pPointer = 20;

    cout << "firstValue is " << firstValue << endl;
    cout << "secondValue is " << secondValue << endl;

    return 0;
}