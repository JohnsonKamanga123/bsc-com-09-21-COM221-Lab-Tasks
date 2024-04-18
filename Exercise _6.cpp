#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*returns a string consisting of characters from some starting position
until the next whitespace. if no word is found, an empty string is 
returned*/
string getWord(string text, int start){

    string word= "";

    for(int i = start ; i < text.length(); i++ ){
        if(isspace(text[i]))
            break;
        word += text[i] ;
    }
    
    return word;
}

//returns the number of words in a text file
int numWords(string text){
    int count = 0;
    string word = "";
    for(int i = 0 ; i < text.length() ; i++){
        if(isalpha(text[i])){
            word = getWord(text, i) ;
            if(word != ""){
                 count++ ;
                i += word.length() - 1 ; 
            }
        }
    }

    return count;
}

//turns the second letter of each word to upper case
string secToUpper(string input){
    string text = input;

    for(int i = 0 ; i < text.length() ; i++){

         if( isspace(text[ (i - 2) > 0 ? (i - 2) : i ]) && isalpha(text[i]) ){
                text[i] = toupper(text[i]);
        }
    }

    return text;
}


//returns true if arg is a vowel otherwise returns false
bool isVowel(char in){
    char ch = tolower(in);
    switch(ch){
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
        default:
            return false;                

    }

}

//returns the number of vowels in a string
int numOfVowels(string text){
    int count = 0;
    for(int i = 0 ; i < text.length() ; i++){
        if(isVowel(text[i])) count++ ;
    }

    return count;

}

//reverses the order of a string
string Reverse(string input){
char hold [input.length() + 1] ;
    for(int i = (input.length() - 1), j = 0 ; i >= 0 && j < input.length() ; i-- , j++){
        hold[j] = input[i];
    }
    hold[input.length()] = '\0';
    return hold;
}


//retrieve all data from text file
string getData(ifstream& in){
    string data = "";

        char ch;
        do{  
            ch = in.get();
            if(ch != EOF){
            data += ch; 
            }
        }while(!in.fail());

    return data;
}

int main(){

    ifstream inputFile ("question6.txt");
    string fileData = "";

    if(inputFile.is_open())
        fileData = getData(inputFile);
    
    cout << "Here are the contents of the file : " << fileData << endl;

    int numVow = numOfVowels(fileData);
    cout << "The number of vowels in the file is : " << numVow << endl;

    int sumOfWords = numWords(fileData) ;
    cout << "There are " << sumOfWords << " words in the text file" << endl;

    string rev = Reverse(fileData);
    cout << "The data in it's reversed form : " << rev << endl;

    string caps = secToUpper(fileData) ;
    cout << "Second letter of each word in caps : " << caps << endl;

    inputFile.close();

    return 0;

}