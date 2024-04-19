#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    unsigned int range = 11;
    srand(range);
    int daysUntilEpiration = rand();

    for(int i = 0 ; i < 11 ; i++)
        cout << i << ". random number generated: " << rand()<< endl;  

}