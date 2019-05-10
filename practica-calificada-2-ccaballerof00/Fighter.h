//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_FIGHTER_H
#define PC_2_FIGHTER_H
#include <vector>
#include "Attack.h"
#include "Defense.h"

using namespace std;

class Fighter {
public:
    vector<Attack*> ataques;
    vector<Defense*> defensas;
    string nombre;
    Fighter(string nombre,vector<Attack*> ataques,vector<Defense*> defensas):nombre{nombre},ataques{ataques},defensas{defensas}{};
    int attack();
    int defense();
};


#endif //PC_2_FIGHTER_H
