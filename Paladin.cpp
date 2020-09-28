#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin

Paladin::Paladin (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, 10), name(namestring) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
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
