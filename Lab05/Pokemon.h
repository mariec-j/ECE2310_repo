#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

class Pokemon {
    public:
    // ------------ CONSTRUCTORS ------------
        Pokemon();
        Pokemon(string name, int hp, int att, int def, vector<string> type);

    // ------------ MUTATORS ------------
        void speak();
        virtual void printStats();

    // ------------ ACCESSORS ------------

    private:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;


};

#endif