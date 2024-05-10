#include <iostream>
#include "Person.h"
#include "string"

using namespace std;

int main(){
    Person Jane = Person("Jane", 60.0f, 20);
    Person John = Person("John", 75.0f, 30);

    float totalWeight = Jane + John;

    cout << "The total weight: " << totalWeight << endl;

    if(Jane == John){
        cout << "This is the same person" << endl;
    }
    
    if(Jane != John){
        cout << "This is NOT the same person" << endl;
    }

    if(Jane < John){
        cout << "Jane is younger than John" << endl;
    }

    if(John > Jane ){
        cout << "John is older than Jane" << endl;
    }

    return 0;
}