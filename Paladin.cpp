#include "Paladin.h"

// Paladin::Paladin
Paladin::Paladin (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, 4), name(namestring) 
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
