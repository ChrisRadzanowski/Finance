#include <stdio.h>
#include <math.h>
#include <cs50.h>
//Author: Christopher Radzanowski
//Purpose: To calculate the effective annual interest rate.

int main ()
{
    //Variable declaration
    float Rn;
    float m;
    double interest;
    float R;

    //User prompted to input values
    printf("Effective annual interest rate calculator.\n");
    Rn = get_float("Input Rn (Nominal interest rate eg. 0.03): ");
    m = get_float("Input m (No. of capitalization periods eg. 12): ");

    //Effective annual interest rate calculation (R)
    interest = pow(( 1 + Rn / m), m); /* figure (1+r) to the n'th power */
    R = interest - 1;

    //Answer presentation in %
    printf("Effective annual interest rate is equal to %.4f%%\n.", R * 100);

    return 0;
}