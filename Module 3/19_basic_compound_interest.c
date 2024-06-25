// 19) Calculate compound interest

#include<stdio.h>
#include<math.h>

main()
{
	double principal, rate, time, compoundInterest;
    int n;

    printf("\n\n\t Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("\n\n\t Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("\n\n\t Enter the time in years: ");
    scanf("%lf", &time);

    printf("\n\n\t Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    // Convert annual interest rate from percentage to decimal
    rate = rate / 100;

	compoundInterest = principal * pow((1 + rate / n), n * time);
	
	printf("\n\n\t The amount after %.2lf years is: %.2lf\n", time, compoundInterest);
    printf("\n\n\t The compound interest is: %.2lf\n", compoundInterest - principal);

}
