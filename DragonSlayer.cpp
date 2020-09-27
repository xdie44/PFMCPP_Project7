#include "DragonSlayer.h"
#include "Dragon.h"

//DragonSlayer::DragonSlayer
int dragonSlAttackDamage = 4;

DragonSlayer::DragonSlayer (std::string namestring, int hitP, int armourP) : Character( hitP, armourP, dragonSlAttackDamage), name(namestring) 
{


}

//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
       
            attackItem->use(this);
            attackItem.reset(); 

        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
std::string getStats()
{

}
