#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "if_else_if.h"
#include switch.h

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify is overtime function")
{
	REQUIRE (is_overtime(35) == false);
	REQUIRE (is_overtime(40) == false);
}

TEST_CASE_METHOD("Verify menu function")
{
	REQUIRE(menu(0) == "Invalid Option");
	
}