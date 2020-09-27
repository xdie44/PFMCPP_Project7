#pragma once

#include "Character.h"

struct Dwarf : Character 
{
    Dwarf (std::string namestring, int hitP, int armourP);

    const std::string& getName() override;

    std::string getStats() override;

private:
    const std::string name;
};