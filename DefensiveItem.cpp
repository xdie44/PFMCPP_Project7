#include "DefensiveItem.h"
//#include <assert>
#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    //assert(false); 
    //make your defensive item use the appropriate Utility helper functions
    useDefensiveItem(character, *this);
}
