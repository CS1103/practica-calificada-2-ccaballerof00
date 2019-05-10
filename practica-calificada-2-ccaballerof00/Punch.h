//
// Created by cristian on 5/10/19.
//

#include "Attack.h"

#ifndef PC_2_PUNCH_H
#define PC_2_PUNCH_H

class Punch:public Attack {
private:
    int power;
public:
    Punch():Attack(){};
    int attack() override
    {
        return power=1;
    }


};

#endif //PC_2_PUNCH_H
