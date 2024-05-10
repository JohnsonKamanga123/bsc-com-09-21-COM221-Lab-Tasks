#pragma once

#include <string>

using namespace std;

class Person {
    public:
    Person();
    Person(float newWeight);
    Person(string fName, float newWeight);
    Person(string fName, float newWeight, int newAge);

    ~Person();

    //overload the add operator
    float operator+(const Person& otherPerson);

    //overload equivalence operator
    bool operator == (const Person& otherPerson);

    //overload inequality operator
    bool operator != (const Person& otherPerson);

    //overload the less than operator
    bool operator < (const Person& otherPerson);

    //overload the greater than operator
    bool operator > (const Person& otherPerson);

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};