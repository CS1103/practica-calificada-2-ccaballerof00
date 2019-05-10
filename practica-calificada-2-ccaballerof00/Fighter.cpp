//
// Created by cristian on 5/10/19.
//

#include "Fighter.h"

int Fighter::attack()
{
    int sum=0;
    for(int i=0;i<ataques.size();i++)
    {
        int sum=sum+ataques[i]->attack();
    };
    return sum;
}

int Fighter::defense()
{
    int sum=0;
    for(int i=0;i<defensas.size();i++)
    {
        int sum=sum+defensas[i]->defense();
    };
    return sum;
}