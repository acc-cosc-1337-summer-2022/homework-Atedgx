#include "dna.h"
#include <string>
#include <iostream>
#include <cstring>
//add include statements
using std::string;
using std::toupper;
using std::size; 
using std::cout;
using std::cin;


double get_gc_content(string dna) {
  double count = 0; // total amount of G and C
  int lengthgc = dna.length();
  for (int i = 0; i < lengthgc; i++) { // for every character in the string
    if (dna[i] == 'C' || dna[i] == 'G') { // if the string is the characters we want
      count++; // add to the count
    }
  }
  return count / dna.length() * 100; 
}

string get_dna_complement(string dna){

    string dna_compliment = dna;
    int dna_compliment1 = dna.length();
    string compliment3;
    string tee = "T";
    string aye = "A";
    string gee = "G";
    string cee = "C";
    for (int i = 0; i <= dna_compliment1-1; i++){
      if (toupper(dna_compliment[i]) == 'A'){
          compliment3 = compliment3 + tee;}
      else if (toupper(dna_compliment[i]) == 'T'){
          compliment3 = compliment3 + aye;}
      else if (toupper(dna_compliment[i]) == 'C'){
          compliment3 = compliment3 + gee;}
      else if (toupper(dna_compliment[i]) == 'G'){
          compliment3 = compliment3 + cee;}
    
}return compliment3;
return 0;
}

string reverse_string(string dna) {
  string result = ""; // creating an empty starting string
  for (int i = dna.length() - 1; i >= 0; i--) { // for every character in the string *backwards*
    result += dna[i]; // add that character to the result string
  }
  return result; // return the result string after loop is finished
}