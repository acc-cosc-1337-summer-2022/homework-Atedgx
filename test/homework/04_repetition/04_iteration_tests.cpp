#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"


using std::string;

TEST_CASE("Verify Test Configuration", "verification"){
	REQUIRE(true == true);
}

TEST_CASE("Verify compliment"){
	string str = "ATCG";
	string str1 = "TAGC";
	REQUIRE(get_dna_complement(str) == str1);
}

TEST_CASE("Verify reverse"){
	string dna = "reverse";
	string str3 = "esrever";
	REQUIRE(reverse_string(dna) == str3);
}

TEST_CASE("Verify g/c content of dna string"){
	string dna = "ATACGACGGA";
	REQUIRE(get_gc_content(dna) == 50);

}