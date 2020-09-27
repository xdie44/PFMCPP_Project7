#include "Dragon.h"
#include "DragonSlayer.h"

//Dragon::Dragon
Dragon::Dragon (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, 4), name(namestring) 
{

}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName
const std::string& Dragon::getName()
{
    return name;
}

//Dragon::getStats
std::string getStats()
{

}
