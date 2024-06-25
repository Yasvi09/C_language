// 17) Calculate person’s insurance premium based on salary

#include<stdio.h>
main()
{
	float salary,premium,percentage;
	
	printf("\n\n\t Enter the salary :");
	scanf("%f",&salary);
	
	printf("\n\n\tEnter the percentage for insurance premium: ");
    scanf("%f", &percentage);
    
    premium=(salary*percentage)/100;
    
    printf("\n\n\t Your insurance premium is : %f",premium);
}
