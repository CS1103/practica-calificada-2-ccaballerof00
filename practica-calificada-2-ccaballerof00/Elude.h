//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_ELUDE_H
#define PC_2_ELUDE_H

#include "Defense.h"

class Elude: public Defense {
private:
    int level;
public:
    Elude():Defense(){};
    int defense() override
    {
        return level=1;
    }


};

#endif //PC_2_ELUDE_H
