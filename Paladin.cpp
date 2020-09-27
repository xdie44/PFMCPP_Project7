#include "Paladin.h"

// Paladin::Paladin
int paladinAttackDamage = 10;

Paladin::Paladin (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, paladinAttackDamage), name(namestring) 
{

}


// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string getStats()
{

}
