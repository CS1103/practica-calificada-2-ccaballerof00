//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_JASONSTATHAM_H
#define PC_2_JASONSTATHAM_H

#include "Fighter.h"

class JasonStatham:public Fighter {
    private:
    vector<Attack*> ataques;
    vector<Defense*> defensas;
    string nombre;
public:
    JasonStatham(string nombre,vector<Attack*> ataques,vector<Defense*> defensas):Fighter(nombre,ataques,defensas){};
};

#endif //PC_2_JASONSTATHAM_H
