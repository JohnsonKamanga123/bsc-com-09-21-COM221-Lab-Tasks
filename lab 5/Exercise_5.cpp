#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//function declarations

int menu();

float area(float side);

float area(float length, float width);

float area(float sideA, float sideB, float theta);

void showArea(int choice);

int main(){
    int choice = 0;
    do{
        choice = menu();
        if(choice != 4 )
            showArea(choice);

    }while(choice != 4);
    return 0;
}

// function definitions

/*displays menu and prompts user for selection. user input
is then returned*/
int menu(){
    int choice = 0;
    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square \n2. Rectangle \n3.Triangle \n4. Quit Program \n\n";
    cout << "Enter selection: " ;
    cin >> choice ;

    return choice;
}

//prompts user to input parameters of shape and returns the area
void showArea(int choice){
    switch(choice){
        case 1:
           { 
            float side = (float)0.0 ;
            cout << "Enter side of square: ";
            cin >> side ;
            cout << "The are of the square is: " << area(side) << endl;
            break;
                }
        case 2:
           { 
            float length = (float)0.0, width = (float)0.0 ;
            cout << "Enter length: ";
            cin >> length;
            cout<< "Enter width: ";
            cin >> width ;
            cout << "The area of the rectangle is: " << area(length, width) << endl;
            break;
                }
        case 3:
            {
            float sideA = (float)0.0, sideB = (float)0.0, theta = (float)0.0 ;
            cout << "Enter side A: ";
            cin >> sideA;
            cout<< "Enter side B: ";
            cin >> sideB ;
            cout<< "Enter theta: ";
            cin >> theta ;
            cout << "The area of the triangle is: " << area(sideA, sideB, theta) << endl;
            break;
            }

        default :
            cout << "Please enter a valid input!!!\n\n" ;

    }

}

//returns the area of a square
float area(float side){
    return side * side ;
}

//returns the area of a rectangle
float area(float length, float width){
    return length * width ;
}


//returns the area of a triangle
float area(float sideA, float sideB, float theta){
    return 0.5 * sideA * sideB * sin(theta) ;
}
