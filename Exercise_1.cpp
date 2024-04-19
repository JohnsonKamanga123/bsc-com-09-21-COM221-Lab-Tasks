#include <iostream>
#include <random>

using namespace std;

int main(){
    unsigned int range = 11;
    random_device engine;
    uniform_int_distribution<int> randomNumbers(1,range);
    int daysUntilEpiration ;

    for(int i = 0 ; i < 11 ; i++)
        cout << i << ". random number generated: "<< randomNumbers(engine) << endl;  

}