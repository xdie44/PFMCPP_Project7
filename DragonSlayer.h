#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string namestring, int hitP, int armourP);

    const std::string& getName() override;

    std::string getStats() override;

    void attack(Character& other) override;
    
private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem {new AttackItem};

};
