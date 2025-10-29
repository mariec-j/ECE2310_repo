#include <iostream>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main() {
    
    // Create a Game object
    Game Battle_Royale = Game();

    // create num_players as int and set to 10
    int num_players = 10;

    // call generatePlayers() with num_players as param
    Battle_Royale.generatePlayers(num_players);

    // Testing to see if select player works (Via this alone it does) 
    // int testBatch[30];
    // for (int i = 0; i <30; i++) {
    //     testBatch[i] = Battle_Royale.selectPlayer();
    // }

    // call gameLoop()
    Battle_Royale.gameLoop();

    // call print final results
    Battle_Royale.printFinalResults();

    return 0;
}