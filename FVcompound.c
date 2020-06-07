#include <stdio.h>
#include <math.h>
#include <cs50.h>
//Author: Christopher Radzanowski
//Purpose: To calculate a Future Value of an investment using compound interest.

int main ()
{
    //Variable declaration
    long PV;
    float r;
    float n;
    float FV;
    double interest;

    //User prompted to insert values
    printf("Compound interest Future Value calculator.\n");
    PV = get_long("Input PV (Present value eg. 100): ");
    r = get_float("Input r (Interest rate eg. 0.03): ");
    n = get_float("Input n (No. of capitalization periods eg. 12): ");

    //FV calculation
    interest = pow((1+r), n); /* figure (1+r) to the n'th power */
    FV = PV * interest;

    //Answer presentation
    printf("The FV is: %.2f\n", FV);

    return 0;
}