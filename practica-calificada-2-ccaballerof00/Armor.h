//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_ARMOR_H
#define PC_2_ARMOR_H

#include "Defense.h"

class Armor: public Defense {
private:
    int level;
public:
    Armor():Defense(){};
    int defense() override
    {
        return level=8;
    }


};

#endif //PC_2_ARMOR_H
