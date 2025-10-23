#include <iostream>
#include "Pokemon.h"
#include <string>
#include <stdio.h>

/**
 * @brief Construct a new Pokemon:: Pokemon object
 * 
 */
Pokemon::Pokemon(): 
 name("unidentified"), hp(0), attack(0), defense(0) {
    cout << "Default Constructor (POKEMON)\n";
}

/**
 * @brief Construct a new Pokemon:: Pokemon object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param type 
 */
Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type):
 name(name),
 hp(hp),
 attack(att),
 defense(def),
 type(type) {
    cout << "Overloaded Constructor (POKEMON)\n";
}

/**
 * @brief 
 * 
 */
void Pokemon::speak() {
    cout << "\"...\"\n";
}

/**
 * @brief print
 * 
 */
void Pokemon:: printStats() {
    printf("Name: %s \nHP: %i \nDEF: %i \nATT: %i \n");
    cout << "Type: \n\t";
    for (int i = 0; i < type.size(); i++) {
        cout << type[i] << ",\t";
    }
    printf("\n");
}