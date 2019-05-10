//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_ATTACK_H
#define PC_2_ATTACK_H
#include <iostream>
using namespace std;

class Attack {
private:
int power;
public:
    Attack():power{power}{};
    virtual int attack()=0;
};


#endif //PC_2_ATTACK_H
