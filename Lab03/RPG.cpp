#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

//constructors
/**
 * @brief Construct a new RPG::RPG object
 * 
 */
RPG::RPG() {
}

/**
 * @brief Construct a new RPG::RPG object
 * 
 * @param name 
 * @param hits_taken 
 * @param luck 
 * @param exp 
 * @param level 
 */
RPG::RPG(string name, int hits_taken, float luck, float exp, int level) {
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

//mutators
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool const RPG::isAlive() {
    if (hits_taken < MAX_HITS_TAKEN)
        return true;
    return false;
}

void RPG::setHitsTaken(int new_hits) {
    this->hits_taken = new_hits;
}

//accessors
    
    // return player name
    string const RPG::getName() { return name; }
    
    // return player's hits taken
    int const RPG::getHitsTaken() { return hits_taken; }
    
    // return player's luck stat
    float const RPG::getLuck(){ return luck; }
    
    // return player's exp count
    float const RPG::getExp() { return exp; }

    // return player level
    float const RPG::getLevel() { return level; }