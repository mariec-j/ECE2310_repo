#ifndef CHARMANDER_H
#define CHARMANDER_H
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon {
    public:
    // ------------ CONSTRUCTORS ------------
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> type, vector<string> skills);

    // ------------ MUTATORS ------------
        void speak();       // override
        void printStats();  // override

    // ------------ ACCESSORS ------------
        // theres none.
    private:
        vector<string> skills;
};

#endif