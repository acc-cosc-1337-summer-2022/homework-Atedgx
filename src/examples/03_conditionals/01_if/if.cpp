//write include statement for if header
#include "if.h"



//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise
bool is_overtime(double hours)
{
    auto overtime = false;
        if(hours > 40)
        {
            overtime = true;
        }
    return overtime;

}
