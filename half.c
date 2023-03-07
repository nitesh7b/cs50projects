// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");


    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float total = (((tax/100) * bill) + bill);
    //printf("%f\n",total);
    float tips = tip;
    float tip_calc = (((tips/100) * total) + total);
    //printf("%.2f\n",tip_calc);
    float final = (tip_calc/2);
    //printf("%.2f\n",final);
    return final;
}
