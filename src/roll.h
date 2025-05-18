#include <iostream>
#include "die.h"

#ifndef ROLL_H
#define ROLL_H
using namespace std;

class Roll
{
    public:
        Roll(Die a, Die b) : die1(a), die2(b) {}
        void roll_dice(); 
        int roll_value();
        
    private:
        Die& die1;
        Die& die2;
        int rolled_value;
};

#endif