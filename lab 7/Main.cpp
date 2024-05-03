#include <iostream>
#include "Rectangle.cpp"

using namespace std;

int main(){
    //create an object of class Rectangle
    Rectangle myRectangle = Rectangle();

    //initialize variables to store user input
    float length = 0.0;
    float width = 0.0;

    //prompt user to enter rectangle's dimensions
    cout << "Enter the rectangle's length: ";
    cin >> length;
    cin.ignore();
    cout << "Enter the rectangle's width: ";
    cin >> width;

    //set object's dimensions to the ones inpuuted by the user
    myRectangle.setLength(length);
    myRectangle.setWidth(width);

    //print the area
    cout << "The area of your rectangle is: " << myRectangle.getArea();

    return 0;
}