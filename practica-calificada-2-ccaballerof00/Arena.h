//
// Created by cristian on 5/10/19.
//

#ifndef PC_2_ARENA_H
#define PC_2_ARENA_H
#include <vector>
#include "Fight.h"

using namespace std;

class Arena {
private:
    vector<Fight> a;
public:
    Arena(vector<Fight> a):a{a}{};
    void run(int n);
    void run_all();
};


#endif //PC_2_ARENA_H
