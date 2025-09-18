#include <iostream>
#include "RPG.h"
using namespace std;

int main() {
    
    RPG p1 = RPG("Sunday", 0 , 0.2, 60, 1);
    RPG p2 = RPG();

    // printing p1's stats
    printf("[ %s Current Status ]\n", p1.getName().c_str());
    printf("Hits Taken: %i \nLuck: %f \nExp: %f \nLevel: %i\n\n", 
    p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    // printing p2's stats
    printf("[ %s Current Status ]\n", p2.getName().c_str());
    printf("Hits Taken: %i \nLuck: %f \nExp: %f \nLevel: %i\n\n", 
    p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    // Calling setHitsTaken(new_hit) for both p1 and p2
    p1.setHitsTaken(2);
    p2.setHitsTaken(5);

    cout << p2.getName() << " hits taken: " << p1.getHitsTaken() << endl;
    cout << p2.getName() << " hits taken: " << p2.getHitsTaken() << endl;

    cout << "0 is dead, 1 is alive" << endl;
    cout << p1.getName() << ": " << p1.isAlive() << endl;
    cout << p2.getName() << ": " << p2.isAlive() << endl;

    return 0;
}