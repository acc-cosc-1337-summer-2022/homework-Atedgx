#include <iostream>
#include "hwexpressions.h"
using std::cout;
using std::cin;

int main()
{
    double meal_amount = 0;
    double tip_rate = 0;
    double tip_amount = 0;
    double tax_amount = 0;
    double total = 0;
    cout<<"How much was the total of your meal?: ";
    cin>>meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);
    cout<<"How much would you like to tip?: ";
    cin>>tip_rate;
    tip_amount = (get_tip_amount(meal_amount,tip_rate));
	tip_amount = tip_amount/400;
    total = (tip_amount + tax_amount + meal_amount);
	tip_amount = tip_amount;
    cout<<"The final cost of the meal with tip: ";
    cout<<"Meal Amount:"<<"\t"<<meal_amount<<"\n";
    cout<<"Sales Tax:"<<"\t"<<tax_amount<<"\n";
    cout<<"Tip percent was: "<<"\t"<<tip_amount<<"\n";
    cout<<"Total:"<<"\t"<<total<<"\n";



    return 0;
}