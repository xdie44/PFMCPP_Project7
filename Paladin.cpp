#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
int paladinAttackDamage = 10;

Paladin::Paladin (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, paladinAttackDamage), name(namestring) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(4);
}


// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
 return getCharacterStats(this);
}
