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