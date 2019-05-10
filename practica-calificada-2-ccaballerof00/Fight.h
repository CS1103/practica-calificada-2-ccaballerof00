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
    int scorea;
    int scoreb;
public:
    Fight(Fighter* a,Fighter* b):a{nullptr},b{nullptr},scorea{0},scoreb{0}{};
    int getScorea();
    int getScoreb();
    string getWinner();
};


#endif //PC_2_FIGHT_H
