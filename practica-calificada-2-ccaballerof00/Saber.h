//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_SABER_H
#define PC_2_SABER_H

#include "Attack.h"

class Saber: public Attack {
private:
    int power;
public:
    Saber():Attack(){};
    int attack() override
    {
        return power=5;
    }


};

#endif //PC_2_SABER_H
