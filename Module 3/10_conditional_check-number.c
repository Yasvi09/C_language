// 10) WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int number;
	
	 printf("\n\n\t Enter number :");
	 scanf("%d",&number);
	 
	 if(number>0)
	 {
	 	printf("\n\n\t Number is positive...");
	 }
	 else if(number<0)
	 {
	 	printf("\n\n\t Number is negative...");
	 }
	 else
	 {
	 	printf("\n\n\t Number is zero...");
	 }
}

