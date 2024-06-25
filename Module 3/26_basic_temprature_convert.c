// 26) Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float fahrenheit,celsius;
	
	printf("\n\n\t Enter temperature in fahrenheit :");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit-32)*5.0/9.0;
	
	printf("\n\n\t Temperature in celsius is : %f",celsius);
}

