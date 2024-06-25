/*		
number div. 3 or not.
number div. 5 or not.
number div. 3 & 5 or not.
number div. not 3 or  5.				

task : Wap to take 3 numbers & find out the maximum.
*/

#include<stdio.h>
main()
{
	int number;
	printf("\n\n\t Enter a number : ");
	scanf("%d",&number);
	if(number%3==0)
	{
		if(number%5==0)
		{
			printf("\n\n\t %d is div. by 3 & 5 both.",number);
		}
		else
		{
			printf("\n\n\t %d is div. by 3 only.",number);
		}
	}
	else
	{
		if(number%5==0)
		{
			printf("\n\n\t %d is div. by 5 only.",number);
		}
		else
		{
			printf("\n\n\t %d is not div. by 3 or 5.",number);
		}
	}
	
}
