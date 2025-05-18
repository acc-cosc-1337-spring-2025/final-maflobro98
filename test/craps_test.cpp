#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include "die.h"
#include "die.cpp"
#include "roll.h"
#include "roll.cpp"
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Check random die generator")
{
	Die game;
	int x;
	for(int i = 0; i < 10; i++)
	{
		int x = game.roll();
		REQUIRE((x > 0 && x < 7));
	}
	
}

TEST_CASE("Check die roll")
{
	Die a, b;
	Roll toss(a,b);
	toss.roll_dice();
	for(int i = 0; i < 10; i++)
	{
		toss.roll_dice();
		REQUIRE((toss.roll_value() > 1 && toss.roll_value() < 13));
	}
	
	
}
