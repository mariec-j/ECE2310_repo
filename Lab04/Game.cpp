#include "Game.h"

/**
 * @brief Construct Game object
 * 
 */
Game::Game() {

}

/**
 * @brief creates up to n RPG pointers and updates names
 * with ordering. Populates live_players from 0 to n - 1 as
 * all players are alive initially
 * 
 * @param n = number of players
 * 
 */
void Game::generatePlayers(int n) {

}

/**
 * @brief Randomly selects a player (via index) from
 * the set(the data type) of alive players
 * 
 * @return int = index for vector, players 
 */
int Game::selectPlayer() {

}

/**
 * @brief Resets winner's hits taken to 0.
 * Removes lsoer from live_players
 * Calls updateExpLevel() for the winner
 * prints the structure "NPC_X" won against "NPC_Y"
 * 
 * @param winner 
 * @param loser 
 * @param loserIndex 
 */
void Game::endRound(RPG* winner, RPG* loser, int loserIndex) {
    
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

    // if playerIndex1 and playerIndex2 are same, call battleRound() again
    // and return within the if-statement

    // Create two RPG* called player1 and player2 using players[playerIndex...]

    // while both players are alive call player1->attack(player2) and vice versa

    // Outside of the whileloop, indentify which player is alive
    // call endRound for the correct respective players


}
/**
 * @brief Runs battleRound() until there is only 1 [layer alive.
 * Remberr that endround() shrinks the size of live_players
 * 
 */
void Game::gameLoop() {

}
/**
 * @brief Calls printStats on all players
 * 
 */
void Game::printFinalResults() {

}
/**
 * @brief Destroy the Game:: Game object
 * 
 */
Game::~Game(){

}