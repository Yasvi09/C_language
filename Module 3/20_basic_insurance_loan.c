/* 20) Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary. */

#include<stdio.h>
main()
{
	float salary,premium,loan,R_salary;
	
	printf("\n\n\t Enter the salary :");
	scanf("%f",&salary);
	
	premium=0.10*salary;
	loan=0.10*salary;
	
	R_salary=salary-(premium+loan);
	
	printf("\n\n\t Monthly salary is : %f",salary);
	printf("\n\n\t Insurance Premium is : %f",premium);
	printf("\n\n\t loan installment is : %f",loan);
	printf("\n\n\t Remaining salary is : %f",R_salary);
}

