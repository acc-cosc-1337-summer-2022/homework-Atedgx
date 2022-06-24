#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"


using std::string;

TEST_CASE("Verify Test Configuration", "verification"){
	REQUIRE(true == true);
}

TEST_CASE("Verify compliment"){
	string str = "AAAACCCGGT";
	string str1 = "CCCGGAAAAT";
	REQUIRE(get_dna_complement(reverse_string(str)) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(reverse_string(str1)) == "ATTTTCCGGG");
}

TEST_CASE("Verify reverse"){
	string dna = "AGCTATAG";
	string str3 = "CGCTATAG";
	REQUIRE(reverse_string(dna) == "GATATCGA");
	REQUIRE(reverse_string(str3) == "GATATCGC");
}

TEST_CASE("Verify g/c content of dna string"){
	string dna = "AGCTATAG";
	string dna1 = "CGCTATAG";
	REQUIRE(get_gc_content(dna) == 37.5);
	REQUIRE(get_gc_content(dna1) == 50);


}