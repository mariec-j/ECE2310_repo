#include "RPG.h"
using namespace std;

// -------- constructors --------
/**
 * @brief Construct a new RPG::RPG object
 * 
 */
RPG::RPG() {
    this->name = "NPC";
    this->hits_taken = 0;
    this->luck = 0.1;
    this->exp = 50.0;
    this->level = 1;
}

/**
 * @brief Overloaded onstructor for a new RPG::RPG object
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

// -------- mutators --------
/**
 * @brief returns whether 
 * hits_taken is less than MAX_HITS TAKEN...
 * In other words, player living status:
 * 
 * @return true : player is alive
 * @return false : player is dead
 */
bool const RPG::isAlive() {
    if (hits_taken < MAX_HITS_TAKEN)
        return true;
    return false;
}

/**
 * @brief sets hits_taken to new_hits
 * 
 * @param new_hits 
 */
void RPG::setHitsTaken(int new_hits) {
    this->hits_taken = new_hits;
}

// -------- accessors --------
    
// return player name
string const RPG::getName() { return name; }

// return player's hits taken
int const RPG::getHitsTaken() { return hits_taken; }

// return player's luck stat
float const RPG::getLuck(){ return luck; }

// return player's exp count
float const RPG::getExp() { return exp; }

// return player level
int const RPG::getLevel() { return level; }

// ------- extended functions --------
/**
 * @brief Updates the name of object
 * 
 * @param name 
 */
void setName(string name) {

}

/**
 * @brief increaase RPG's experience by 50
 *        After updating...
 *       if RPG's experience is >= 100.0:
 *       increaase RPG's level by 1, 
 *       reset experience to 0, 
 *       increase luck by 0.1
 */
void updateExpLevel() {

}

/**
 * @brief Hits or misses opponent at random.
 *      Luck is a form of defense. Higher opponent's luck,
 *      the more likely the attack will miss.
 *      If the attack is a hit, opponent's hits taken should
 *      increment by 1.
 * 
 * @param opponent 
 */
void attack(RPG* opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.1, 1.0);

    float random_num = dis(gen);

    //create a bool called hit
    // hit true if random_num > HIT_FACTOR * opponent's luck
    // if hit true, call updateHitsTakento increase opponent's hits taken
}