//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	cout<<"Please input a year";
	cin>>year;

	auto result = get_generation(year);
	cout<<"Generation is "<<result<<"\n"
	
	return 0;
}