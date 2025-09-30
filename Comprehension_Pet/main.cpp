/**
 * Create two pet objects, one which calls the default constructor and another that calls the overloaded constructor
 * Use print statements with the accessor functions (e.g  getName(), etc) to view the pets' private variables.
 * Update all of the private variables of the Pet that was called by the overloaded constructor
 * Call print again to see the changes for that pet
 */

#include <iostream>
#include "Pet.h"

int main() {
    Pet dog = Pet(); // Calls default constructor
    Pet cat = Pet("Greg", 3, "Alex", 0); // Calls overloaded constructor

    cout << "Pet: " << dog.getName() 
    << "\n------------" 
    << "\nOwner: " << dog.getOwner() 
    << "\nAge: " << dog.getAge() 
    << "\nIs it house trained? (Yes = 1 , No = 0): " << dog.getisHouseTrained() << endl << endl;

    cout << "Pet: "
    << cat.getName() << "\n------------" 
    << "\nOwner: " << cat.getOwner() 
    << "\nAge: " << cat.getAge() 
    << "\nIs it house trained? (Yes = 1 , No = 0): " << cat.getisHouseTrained() << endl << endl;

    // changing cat's private variables
    cat.updateName("Gerg");
    cat.updateAge(4);
    cat.updateOwner("Leon");
    cat.setHouseTrained();

    cout << "Changed Pet: "
    << cat.getName() << "\n------------" 
    << "\nOwner: " << cat.getOwner() 
    << "\nAge: " << cat.getAge() 
    << "\nIs it house trained? (Yes = 1 , No = 0): " << cat.getisHouseTrained() << endl << endl;


    return 0;
}