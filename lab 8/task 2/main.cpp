#include <iostream>
#include "Person.h"
#include "string"

using namespace std;

int main(){
    Person Jane = Person("Jane",60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;

    cout << "The total weight: " << totalWeight << endl;

    if(Jane == John){
        cout << "This is the same person" << endl;
    }
    
    if(Jane != John){
        cout << "This is NOT the same person" << endl;
    }

    return 0;
}