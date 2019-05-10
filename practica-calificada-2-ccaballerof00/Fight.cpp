//
// Created by cristian on 5/10/19.
//

#include "Fight.h"
#include "Fighter.h"

string Fight::getWinner()
{
        scorea=a->defense()-b->attack();
        scoreb=b->defense()-a->attack();
    if(scorea>scoreb)
    {
        return a->nombre;
    }
    if(scoreb>scorea)
    {
        return b->nombre;
    }
    else return "";
}