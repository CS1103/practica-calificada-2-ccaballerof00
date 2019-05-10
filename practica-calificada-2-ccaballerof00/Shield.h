//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_SHIELD_H
#define PC_2_SHIELD_H

#include "Defense.h"

class Shield: public Defense {
private:
    int level;
public:
    Shield():Defense(){};
    int defense() override
    {
        return level=4;
    }


};

#endif //PC_2_SHIELD_H
