#include "Dwarf.h"

//Dwarf::Dwarf
Dwarf::Dwarf (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, 4), name(namestring) 
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

