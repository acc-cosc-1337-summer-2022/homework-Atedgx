#include <iostream>
#include "hwexpressions.h"

int main()
{
    double meal_amount = 0;
    double tip_rate = 0;
    double tip_amount = 0;
    double tax_amount = 0;
    double total = 0;
    std::cout<<"How much was the total of your meal?: ";
    std::cin>>meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);
    std::cout<<"How much would you like to tip?: ";
    std::cin>>tip_rate;
    tip_amount = (get_tip_amount(meal_amount,tip_rate));
	tip_amount = tip_amount/400;
    total = (tip_amount + tax_amount + meal_amount);
	tip_amount = tip_amount;
    std::cout<<"The final cost of the meal with tip: ";
    std::cout<<"Meal Amount:"<<"\t"<<meal_amount<<"\n";
    std::cout<<"Sales Tax:"<<"\t"<<tax_amount<<"\n";
    std::cout<<"Tip percent was: "<<"\t"<<tip_amount<<"\n";
    std::cout<<"Total:"<<"\t"<<total<<"\n";



    return 0;
}