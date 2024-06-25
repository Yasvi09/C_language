// 17) Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
	int n,i,even=0,odd=0;
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter %d number :",i);
		scanf("%d",&n);
		
		if(n%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n\n\t Even number is : %d",even);
	printf("\n\n\t Odd number is : %d",odd);
	
}
