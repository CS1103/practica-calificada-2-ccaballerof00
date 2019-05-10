//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_DEFENSE_H
#define PC_2_DEFENSE_H
#include <iostream>
using namespace std;

class Defense {
private:
    int level;
public:
    Defense():level{level}{};
    virtual int defense()=0;
};


#endif //PC_2_DEFENSE_H
