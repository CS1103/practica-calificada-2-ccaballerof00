//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_FIGHT_H
#define PC_2_FIGHT_H


#include "Fighter.h"

class Fight {
private:
    Fighter* a;
    Fighter* b;
public:
    int scorea;
    int scoreb;
    Fight(Fighter* a,Fighter* b):a{a},b{b},scorea{0},scoreb{0}{};
    string getWinner();
};


#endif //PC_2_FIGHT_H
