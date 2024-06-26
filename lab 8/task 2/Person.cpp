#pragma once

#include <string>
#include "Person.h"

Person::Person(){
    mWeight = 0.0;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::Person(string fName, float newWeight){
    mWeight = newWeight;
    mFirstName = fName;
    mAge = 0;
}

Person::Person(string fName, float newWeight, int newAge){
    mWeight = newWeight;
    mFirstName = fName;
    mAge = newAge;
}

Person::~Person(){

}

//adds the weight of 2 person objects
float Person::operator+(const Person& otherPerson){
    return this->mWeight + otherPerson.mWeight;
}

/*overload equivalence operator. checks if two person objects
have the same name*/
    bool Person::operator == (const Person& otherPerson){
        return this->mFirstName == otherPerson.mFirstName ;
    }

    /*overload inequality operator. checks if two person objects
        have different names*/
    bool Person::operator != (const Person& otherPerson){
        return this->mFirstName != otherPerson.mFirstName ;
    }

    //overload the less than operator
    bool Person::operator < (const Person& otherPerson){
        return this->mAge < otherPerson.mAge;
    }

    //overload the greater than operator
    bool Person::operator > (const Person& otherPerson){
        return this->mAge > otherPerson.mAge;
    }

    Person::operator int(){
        return mAge;
    }

    Person::operator string(){
        return mFirstName;
    }

    Person::operator float(){
        return mWeight;
    } 

