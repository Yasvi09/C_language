/*  30) If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-   */

#include<stdio.h>
main()
{
	float bill,final_bill;
	
	printf("\n\n\t Enter your bill amount :");
	scanf("%f",&bill);
	
	if(bill>800)
	{
		final_bill=bill+(bill*0.18);
	}
	else
	{
		final_bill=bill;
	}
	
	if(final_bill<256)
	{
		final_bill=256;
	}
	
	printf("\n\n\t The final bill amount is : %.2f",final_bill);
	
}
