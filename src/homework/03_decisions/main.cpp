#include "decisions.h"
#include <iostream>
using std::cout; 
using std::cin; 


//write include statements
/*Create a loop that continues until the user opts to exit.
         Capture data from the keyboard for letter grade and credit hours for each class.
         Keep a running total of the credit points and credit hours.

    After user opts out (after the loop).
    Calculate the GPA and display the total credit points and total credit hours.*/
int main() 
{
    
    char confirm = 'Y';
    int letter_grade_total = 0;
    int number_of_courses;
    int credit_hours = 0;
    int credit_points = 0;
    int credits_total = 0;

    cout<<"How many courses are you taking this semester?"<<"\n";
    cin>>number_of_courses;
    
    
    


    do {
       
        char letter_grade;
        cout<<"Please input letter grade for your class."<<"\n";
        cin>>letter_grade;
        letter_grade_total += get_grade_points(letter_grade);
        cout<<"Please input the credit hours for your class:"<< "\n";
        cin>>credit_hours;
        cout<<"How many credits is this class worth?";
        cin>>credit_points;
        credits_total += calculate_gpa(credit_points, credit_hours);
        cout<<"Do you have any additonal classes? (Y or N)"<<"\n";
        cin>>confirm; 
    }
    while ((confirm == ('Y')) || (confirm == ('y')));
    {
        double gpa = credits_total * letter_grade_total;
        cout<<"Your GPA is currently: "<<gpa<<"\n";
    }


    //for((int i = 0); (i <= temp_var.size()); (i++))
    /*{
       
    }*/
}