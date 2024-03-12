
# include <iostream>
# include <random>
# include <cstdlib>
# include <ctime>
# include <chrono>
# include <vector>
# include "darc_f.hpp"
# include <string>
using namespace std;
vector<string> inventory {"Sword", "Leather Armor", "Health Potion"};

// attack = bonus to add to attack rolls (d20). If it hits higher than target (defense), damage roll. if it hits crit, damage roll rwice.
//Players attack and def are based on class
// Warrior class (tank type) - Attack 4, Def 13
// Sorc Class (support spells and aoe) - Attack 2, Def 6
// rogue class (can hit any target, poison, support) - Attack 6, def 8
// inventory attached to class or player? Will be tied to wieght (use a loop to determine weight total.) Items have a weight as well?

int main() {


ClassType warrior(10, 13, 4, "Warrior");
RaceType human("Human", 0, 0, "Trade Bonuses with other races");


Player player("Human", 5, 5, "Humans have strong will", "John", 1000, 10);
return 0;
// make a getter method to print out info for player below


}