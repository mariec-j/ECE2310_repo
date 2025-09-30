#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

//Constructors
Pet::Pet() {
    this->name = "Null";
    this->age = 1;
    this->owner = "None";
    this->isHouseTrained = 0;
}

Pet::Pet(string name, int age, string owner, bool isHouseTrained) {
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

//mutators
void Pet::updateName(string name) { this->name = name; }
void Pet::updateAge (int age) { this->age = age;}
void Pet::updateOwner (string adopter) { this->owner = owner; }
void Pet::setHouseTrained() { this->isHouseTrained = 1; }

//accessors
string Pet::getName() const { return name; }
int Pet::getAge() const { return age; }
string Pet::getOwner() const { return owner; }
bool Pet::getisHouseTrained () const { return isHouseTrained; }