# include "darc_f.hpp"
# include <iostream>
# include <string>
# include <random>
# include <cstdlib>
# include <ctime>
# include <chrono>
# include <vector>
using namespace std;

ClassType::ClassType(int max_health, int start_defense, int start_attack, string start_class_type)
  : health(max_health), defense(start_defense), attack(start_attack), class_type(start_class_type) {}
  ClassType::~ClassType() {
    
  }

RaceType::RaceType(string new_name, int attack_change, int def_change, string new_race_special)
  : name(new_name), attack(attack_change), def(def_change), race_special(new_race_special) {}
RaceType::~RaceType() {

}


Player::Player(string new_name, int attack_change, int def_change, string new_race_special, string new_char_name, int up_xp, int new_level)
  : RaceType(new_name, attack_change, def_change, new_race_special), char_name(new_char_name), xp(up_xp), level(new_level) {}

Player::~Player(){

}


Gnoll::Gnoll(int max_health, int start_defense, int start_attack, string new_name) 
  : health(max_health), defense(start_defense), attack(start_attack), name(new_name) {}






// roll method for attack for both player and enemy
int Roll::attack_roll(int attack, int defense) {
    srand(time(0));
    std::random_device rd;
    std::mt19937 gen(std::chrono::high_resolution_clock::now().time_since_epoch().count()); 
    std::uniform_int_distribution<> d1(1, 20); 
    std::uniform_int_distribution<> d2(1, 8);
    std::uniform_int_distribution<> d3(1, 6);

    int d20 = d1(gen); 
    


if (d20 + attack == 20) {
    cout << "Critical hit!" << d20 << "\n"; 
} else if (d20 + attack > defense) {
    cout << " <blank> did <blank> damage!" << d20 << "\n";
} else {
  cout << "MISS" << "\n";
}
}



