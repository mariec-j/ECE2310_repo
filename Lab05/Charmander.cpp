#include <iostream>
#include "Charmander.h"
#include <string>
#include <stdio.h>

/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 */
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default Constructor (CHARMANDER)\n";
}

/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param type 
 * @param skills 
 */
Charmander::Charmander(string name, int hp, int att, int def, vector<string> type, vector<string> skills): 
 Pokemon(name, hp, att, def, type), skills(skills) {
    cout << "Overloaded constructor (CHARMANDER)\n";
}

/**
 * @brief 
 * 
 */
void Charmander::speak() {
    cout << "\"Charmander-char!\"\n";
}

/**
 * @brief calls printStats from parent class (Pokemon)
 *        and appends the skills used for Charmander
 * 
 */
void Charmander::printStats() {
    Pokemon::printStats();
    cout << "Skills: \n\t";
    for(int i = 0; i < skills.size(); i++) {
        cout << skills[i] << ",\t";
    }
    cout << endl;
}