#include <iostream>
#include <string>

using namespace std;


//returns true if input is between 5 and 10, otherwise false
bool isValid(string num){

    //if the input has more than 2 char/digits, return false
    if(num.length() > 2) return false;
    
    //if it has 1 digit/char, check if it is out of range
    else if (num.length() == 1){
        if(num[0] < '5' || num[0] > '9'){ 
            cout << num[0] << endl;
            return false;
        }
    }

    //if it has 2 digits/chars, check if the string equals to 10
    else if (num.length() == 2){
        if ( num[0] != '1' || num[1] != '0')
            return false;
    }
    return true; 
}

int main(){
    string num = "";
    do{     
        cout << "Enter an integer value between 5 and 10: " ;
        cin >> num ;
        cout << num << endl ;
      }while(!isValid(num));

cout << "Your input value(" << num << ") has been accepted";
}