#include <iostream>
#include <cstdlib>
#include "die.h"

using namespace std;

int Die::roll()
{
    return rand() % 7;
}