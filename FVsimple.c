#include <stdio.h>
#include <math.h>
#include <cs50.h>
//Author: Christopher Radzanowski
//Purpose: To calculate a Future Value of an investment using simple interest.

int main ()
{
    //Variable declaration
    long PV;
    float r;
    float n;
    float FV;

    //User prompted to input values
    printf("Simple interest Future Value calculator.\n");
    PV = get_long("Input PV (Present value eg. 100): ");
    r = get_float("Input r (Interest rate eg. 0.03): ");
    n = get_float("Input n (No. of periods np. 12): ");

    //FV calculation
    FV = (float)PV * (1 + r * n);

    //Answer presentation
    printf("The FV is: %.2f\n", FV);

    return 0;
}