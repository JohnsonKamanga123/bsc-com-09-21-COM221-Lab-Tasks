#include <iostream>

using namespace std;

//function declarations

void modifyRow(double ** hold, int row, int col);

void addRows(double ** hold, int row, int col);

int main(){
    int row = 0;
    int col = 0;
    cout << "Enter the first dimension(no greater than 3): ";
    cin >> row;
    cin.ignore();
    cout << "Enter the second dimension(no greater than 3): ";
    cin >> col;
    cin.ignore();

    //allocate memory for a 2D array 
    double ** pArray = new double *[row];

    //allocate coloums to 2D array
    addRows(pArray,row,col);

    for(int i = 0 ; i < row ; i++){
        modifyRow(pArray, row, col);
    }
    cout << "Here is the output : " << endl;
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
        cout << pArray[i][j] << " " ;
        }
        cout << endl;
    }
}

//function definitions

/*function that adds some values to the array. Element
hold[i][j] is assigned the value i/(j + 1)*/ 
void modifyRow(double ** hold, int row, int col){

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
        //(j + 1) was used to avoid division by 0
        hold[i][j] = (float)i/(j+1);
        }
    }
}

/*function to added the second dimension to the Array in free 
store using pointers*/
void addRows(double ** hold, int row, int col){
    for(int i = 0 ; i < row ; i++){
        //assign row i with an array of length col in free store
        hold[i] = new double[col]; 
         }
}