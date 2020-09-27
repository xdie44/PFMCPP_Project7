#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
int dwarfAttackDamage = 4; 

Dwarf::Dwarf (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, dwarfAttackDamage), name(namestring) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

