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
bool const isAlive() {

}

void setHitsTaken(int new_hits) {

}

//accessors
    string const getName();
    int const getHitsTaken();
    float const getLuck();
    float const getExp();
    float const getLevel();