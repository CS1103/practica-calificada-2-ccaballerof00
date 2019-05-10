//
// Created by cristian on 5/10/19.
//


#ifndef PC_2_BRUCELEE_H
#define PC_2_BRUCELEE_H

#include "Fighter.h"

class BruceLee:public Fighter {
    private:
    vector<Attack*> ataques;
    vector<Defense*> defensas;
    string nombre;
public:
    BruceLee(string nombre,vector<Attack*> ataques,vector<Defense*> defensas):Fighter(nombre,ataques,defensas){};
};

#endif //PC_2_BRUCELEE_H

