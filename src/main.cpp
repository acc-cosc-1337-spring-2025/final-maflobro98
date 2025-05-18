#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
#include "roll.h"


using namespace std;
int main() 
{
	srand(time(0));
	Die die1, die2;
	Roll toss(die1, die2);
	toss.roll_dice();
	cout << toss.roll_value() << endl;
	


	return 0;
}