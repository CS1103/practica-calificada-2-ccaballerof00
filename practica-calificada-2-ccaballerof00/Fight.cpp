//
// Created by cristian on 5/10/19.
//

#include "Fight.h"
#include "Fighter.h"

int Fight::getScorea()
{
    scorea=a->defense()-b->attack();
    return scorea;
}

int Fight::getScoreb()
{
    scoreb=b->defense()-a->attack();
    return scoreb;
}

string Fight::getWinner()
{
    if(scorea>scoreb)
    {
        return a->nombre;
    }
    if(scoreb>scorea)
    {
        return b->nombre;
    }
}