# include <string>
# include <vector>
using namespace std;

class Roll {

  int attack_roll(int attack, int defense); 

};

// attack = bonus to add to attack rolls (d20). If it hits higher than target (defense), damage roll. if it hits crit, damage roll rwice.
//Players attack and def are based on class
// Warrior class (tank type) - Attack 4, Def 13
// Sorc Class (support spells and aoe) - Attack 2, Def 6
// rogue class (can hit any target, poison, support) - Attack 6, def 8

class ClassType {

private:
    int health;
    int defense;
    int attack;
    string class_type;

  public:
  ClassType(int max_health, int start_defense, int start_attack, string start_class_type);
  ~ClassType();

};

class Gnoll {

private:
    int health;
    int defense;
    int attack;
    bool interact = false;
    string name;

  public:
  Gnoll(int max_health, int start_defense, int start_attack, string new_name);
  ~Gnoll();

};

//Race type will be human, Elf, Dwarf. Each race has a bonus or minus to stats plus a special. 
class RaceType {
  protected:
    string name;
    int attack;
    int def;
    string race_special;

  public:
  RaceType(string new_name, int attack_change, int def_change, string new_race_special);
  ~RaceType();

};


//player class will track name, xp, and level.  and will use the objects built from ClassType and RaceType
class Player: public RaceType {
    string char_name;
    int level;
    int xp;
  
  public:
  Player(string new_name, int attack_change, int def_change, string new_race_special, string new_char_name, int up_xp, int new_level);
  ~Player();

};

