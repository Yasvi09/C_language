/* 31)  Write a program in C to read any Month Number in integer and display the
number of days for this month. */

#include<stdio.h>
main()
{
	int n,days;
	
	 printf("\n\n\t Enter any month number(1-12):");
	 scanf("%d",&n);
	 
	 if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	 {
	 	days=31;
	 }
	 else if(n==4||n==6||n==9||n==11)
	 {
	 	days=30;
	 }
	 else if(n==2)
	 {
	 	days=28;
	 }
	 else 
	 {
	 	printf("\n\n\t Please enter valid month number between 1 to 12...");
	 }
	 
	 printf("\n\n\t Number of days according to month is : %d",days);
}
