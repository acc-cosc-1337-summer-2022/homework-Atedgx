#include "hwexpressions.h"

//example
const double tax_rate = 0.0675;
double get_sales_tax_amount(double meal_amount)
{
    double product = 0;
    product = (tax_rate * meal_amount);
    return product;
};

double get_tip_amount(double meal_amount, double tip_rate)
{
    double tip_rate_product = meal_amount * tip_rate;
    return tip_rate_product;
};




