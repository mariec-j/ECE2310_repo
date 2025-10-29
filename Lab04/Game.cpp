#include "Game.h"

/**
 * @brief Construct Game object
 * 
 */
Game::Game() {}

/**
 * @brief creates up to n RPG pointers and updates names
 * with ordering. Populates live_players from 0 to n - 1 as
 * all players are alive initially
 * 
 * @param n = number of players
 * 
 */
void Game::generatePlayers(int n) {
    for (int i = 0; i < n; i++) {
        players.push_back(new RPG());

        string npc_name = "NPC_" + to_string(i);
        players[i]->setName(npc_name);
        live_players.insert(i);
    }
}

/**
 * @brief Randomly selects a player (via index) from
 * the set(the data type) of alive players
 * 
 * @return int = index for vector, players 
 */
int Game::selectPlayer() {
    random_device rd;
    mt19937 gen(rd());
    // make a distribution of all ints of 0 up to live_players.size() - 1 
    uniform_int_distribution<> dist(0, live_players.size() - 1);

    //pick random index from the uniform int distribution
    int randomIndex = dist(gen);

    // Advance iterator (of the set) to index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

/**
 * @brief Resets winner's hits taken to 0.
 * Removes loser from live_players
 * Calls updateExpLevel() for the winner
 * prints the structure "NPC_X" won against "NPC_Y"
 * 
 * @param winner 
 * @param loser 
 * @param loserIndex 
 */
void Game::endRound(RPG* winner, RPG* loser, int loserIndex) {
    winner->setHitsTaken(0);
    winner->updateExpLevel();
    
    live_players.erase(loserIndex);


    cout << winner->getName() << " won against " << loser->getName() << endl;
}

/**
 * @brief Calls selectPlayer() twice to get 2 players at random.
 * If players are redundant make a recursive call to battleRound() and return.
 * Run a round of hits across player1 and player2 until only 1 is alive.
 * Call endRound() to highlight who won and update stats
 * 
 */
void Game::battleRound() {
    // Call selectPlayer twice and assign the values to playerIndex1 and playerIndex2
    int playerIndex1 = selectPlayer();
    int playerIndex2 = selectPlayer(); 

    // if playerIndex1 and playerIndex2 are same, call battleRound() again
    // and return within the if-statement
    if (playerIndex1 == playerIndex2) {
        battleRound();
        return;
    }

    // Create two RPG* called player1 and player2 using players[playerIndex...]
    RPG* player1 = players[playerIndex1];
    RPG* player2 = players[playerIndex2];

    // while both players are alive call player1->attack(player2) and vice versa
    while (player1->isAlive() || player2->isAlive()) {
        player1->attack(player2);
        player2->attack(player1);
    }

    // Outside of the whileloop, indentify which player is alive
    // call endRound for the correct respective players
    if(player1->isAlive())
        endRound(player1, player2, playerIndex2);
    else
        endRound(player2, player1, playerIndex1);
}
/**
 * @brief Runs battleRound() until there is only 1 [layer alive.
 * Rember that endround() shrinks the size of live_players
 * 
 */
void Game::gameLoop() {
    while(live_players.size() > 1)
        battleRound();
}

/**
 * @brief Calls printStats on all players
 * 
 */
void Game::printFinalResults() {
    for(int i = 0; i < players.size(); i++)
        players[i]->printStats();
}

/**
 * @brief Destroy the Game:: Game object
 * 
 */
Game::~Game(){

}