#include <set>
#include <vector>
#include "RPG.h"

#ifndef GAME_H
#define GAME_H

using namespace std;

class Game {
    public:
        Game();

        void generatePlayers(int n);
        int selectPlayer();
        
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        
        void printFinalResults();

        ~Game();

    private:
        vector<RPG*> players;
        set<int> live_players;

};
#endif