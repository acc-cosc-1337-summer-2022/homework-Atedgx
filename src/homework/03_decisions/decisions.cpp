//write include statement for decisions header
#include "decisions.h"
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
/* A get_grade_points function that accepts a string (letter_grade) and returns the grade points.
2) A calculate_gpa function that accepts credit_hours and credit_points parameter and returns their quotient (credit_points/credit_hours)*/
//Write code for function(s) code here
int number_of_courses = 0;
int grade_points; 
int grade_points_total;

int get_grade_points(char letter_grade)
{
    if(letter_grade == 'A'){grade_points = (int('A') - 61); return grade_points;}
    else if(letter_grade == 'B'){int grade_points = (int('B') - 63);return grade_points;}
    else if(letter_grade == 'C'){int grade_points = (int('C') - 65);return grade_points;}
    else if(letter_grade == 'D'){int grade_points = (int('D') - 67);return grade_points;}
    else if(letter_grade == 'F'){int grade_points = (int('F') - 70);return grade_points;}
    return grade_points;};


double calculate_gpa(double credit_points, double credit_hours)
{
    double quotient = credit_points/credit_hours;
    return quotient;
}