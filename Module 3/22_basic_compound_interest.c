/* 22) Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

#include <stdio.h>
#include <math.h>

int main() {
    
    double principal, rate, time, amount, compoundInterest;

    printf("\n\n\t Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("\n\n\t Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("\n\n\t Enter the time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);

    compoundInterest = amount - principal;

    printf("\n\n\t Principal Amount: %.2f", principal);
    printf("\n\n\t Annual Interest Rate: %.2f", rate);
    printf("\n\n\t Time: %.2f years", time);
    printf("\n\n\t Amount: %.2f", amount);
    printf("\n\n\t Compound Interest: %.2f", compoundInterest);

}

