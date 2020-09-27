#include "Dwarf.h"

//Dwarf::Dwarf
int dwarfAttackDamage = 4; 

Dwarf::Dwarf (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, dwarfAttackDamage), name(namestring) 
{


}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string getStats()
{

}

