#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main(){

    string list [] = {"B123",
                        "C234",
                        "A345",
                        "C15",
                        "B177",
                        "G3003",
                        "C235",
                        "B179"};
    //length of array
    int length = sizeof(list)/sizeof(list[0]);                    
    for(int i = 0 ; i < length  ; i++){
        if(list[i][0] == 'B') 
            cout << "Index " << i << " has " << list[i][0] << endl;

    }
}