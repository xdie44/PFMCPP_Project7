#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin (std::string namestring, int hitP, int armourP);

    const std::string& getName() override;

    std::string getStats() override;

private:
    const std::string name;
};
