#include <iostream>
#include <string>

using namespace std;

//function declarations

bool isNum(string num);

bool isValid(string num);

int main(){
    string num = "";
    do{     
        cout << "Enter an integer value between 5 and 10: " ;
        cin >> num ;
        if(!isNum(num))
            cout << "Sorry, you entered an invalid number, please try again" << endl;
        else if(!isValid(num))
            cout << "You entered " << num << ". PLease enter a number between 5 and 10" << endl;

      }while(!isValid(num));

cout << "Your input value(" << num << ") has been accepted";
}


//function defenitions

//returns true if input string is a number, otherwise returns false
bool isNum(string num){
    for(int i = 0 ; i < num.length() ; i++){
        //if not a digit, return false
        if(!isdigit(num[i])) return false;
    }
    return true;
}

//returns true if input is between 5 and 10, otherwise false
bool isValid(string num){

    //if not a number, return false
    if(!isNum(num)) return false;

    //if the input has more than 2 char/digits, return false
    else if(num.length() > 2) return false;
    
    //if it has 1 digit/char, check if it is out of range
    else if (num.length() == 1){
        if(num[0] < '5' || num[0] > '9'){
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
