//PROJECT 1
//ASHISH PAL
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <cctype>
using namespace std;

/*
private:
- The name of the character (a string in UPPERCASE)
- The race of the character (an enum)
- The character's vitality (a non-negative integer)
- The character's max armor level (a non-negative integer)
- The character's level (a non-negative integer)
- A flag indicating whether the character is an enemy
*/

enum Race{ NONE, HUMAN, ELF, DWARF, LIZARD, UNDEAD };

class Character {
    private:
    string name_;
    Race race_;
    int vitality_;
    int armor_;
    int level_;
    bool enemy_;
    public:
    Character();
    Character(string name, string race, int vitality = 0, int armor = 0, int level = 0, bool enemy = false);
    
    void setName(const string name);
    string getName()const;

    void setRace(const string race);
    string getRace()const;

    void setVitality(const int vitality);
    int getVitality()const;

    void setArmor(const int armor);
    int getArmor()const;

    void setLevel(const int level);
    int getLevel()const;

    void setEnemy();
    bool isEnemy()const;
};

#endif