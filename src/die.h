#include <iostream>
#include <cstdlib>
#include <string>

#ifndef DIE_H
#define DIE_H

using namespace std;

class Die
{
    public:
        int roll();

    private:
        int sides = 6;
};

#endif