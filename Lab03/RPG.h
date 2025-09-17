#ifndef RPG_H
#define RPG_H

using namespace std;
const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05; 
const int MAX_HITS_TAKEN = 3;
class RPG {
    public:
    RPG();
    RPG(string name, int hits_taken, float luck, float exp, int level);


};
#endif RPG_H