/* 2)  Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)  */

#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	printf("\n\n\t Enter number 1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter number 2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ----------- Arithmatic Operations --------------");
	printf("\n\n\t Press + for Addition");
	printf("\n\n\t Press - for Subtraction");
	printf("\n\n\t Press * for Multiplication");
	printf("\n\n\t Press / for Division");
	printf("\n\n\t Press % for Modulo");
	printf("\n\n\t ------------------------------------------------");
	
	printf("\n\n\t Select the operation : ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' : printf("\n\n\t Addition = %d",n1+n2);
				 break;
		
		case '-' : printf("\n\n\t Subtraction = %d",n1-n2);
				 break;
		
		case '*' : printf("\n\n\t Multiplication = %d",n1*n2);
				 break;
		
		case '/' : printf("\n\n\t Division = %d",n1/n2);
				 break;

		case '%' : printf("\n\n\t Modulo = %d",n1%n2);
				 break;
				 		
		default : printf("\n\n\t Invalid choice!! Try again...");
	}
}
