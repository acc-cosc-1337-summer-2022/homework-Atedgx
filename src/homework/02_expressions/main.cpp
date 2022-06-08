//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;
	cout<<"How much was the total of your meal?";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<"How much do you want to tip";
	cin>>tip_rate;
	tip_amount = (get_tip_amount(meal_amount,tip_rate));
	full_meal_cost = (tip_amount + tax_amount + meal_amount);
	cout<<"The final cost of the meal with tip: ";
	cout<<"Meal Amount:"<<"\t"<<meal_amount<<"\n";
	cout<<"Sales Tax:"<<"\t"<<tax_amount<<"\n";
	cout<<"Tip Amount:"<<"\t"<<tip_amount<<"\n";
	cout<<"Total:"<<"\t"<<full_meal_cost<<"\n";



	return 0;
}
