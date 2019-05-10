//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_FIREARM_H
#define PC_2_FIREARM_H

#include "Attack.h"

class Firearm: public Attack {
private:
    int power;
public:
    Firearm():Attack(){};
    int attack() override
    {
        return power=10;
    }


};

#endif //PC_2_FIREARM_H
