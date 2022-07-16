#include "void.h"

void value_param(int num)
{
    num = 100;
}

void func_scope()
{
    int num = 10;
    cout<<"Local function variable num: "<<num<<"\n"
}