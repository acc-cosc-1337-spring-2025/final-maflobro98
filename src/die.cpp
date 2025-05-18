#include <iostream>
#include <cstdlib>
#include "die.h"
#include "roll.h"

using namespace std;

int Die::roll()
{
    return  rand() % 6 + 1;
}