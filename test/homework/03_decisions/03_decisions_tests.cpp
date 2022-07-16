#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify A shows the value 4"){
	REQUIRE(get_grade_points('A') == 4);
}

TEST_CASE("Verify B shows the value 3"){
	REQUIRE(get_grade_points('B') == 3);
}

TEST_CASE("Verify C shows the value 2"){
	REQUIRE(get_grade_points('C') == 2);
}

TEST_CASE("Verify D shows the value 1"){
	REQUIRE(get_grade_points('D') == 1);
}

TEST_CASE("Verify F shows the value 0"){
	REQUIRE(get_grade_points('F') == 0);
}

TEST_CASE("Verify the correct gpa for 12"){
	REQUIRE(calculate_gpa(45,12) == 3.75);
}

TEST_CASE("Verify the correct gpa for 120"){
	REQUIRE(calculate_gpa(390,120) == 3.25);
}

TEST_CASE("Verify the correct gpa for 90"){
	REQUIRE(calculate_gpa(180,90) == 2.00);
}
