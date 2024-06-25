// 18) Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
main()
{
	float costPrice,sellingPrice,profitOrLoss;
	
	printf("\n\n\t Enter cost price :");
	scanf("%f",&costPrice);
	
	printf("\n\n\t Enter selling price :");
	scanf("%f",&sellingPrice);
	
	if(sellingPrice>costPrice)
	{
		profitOrLoss=sellingPrice-costPrice;
		printf("\n\n\t You made a profit of : %f",profitOrLoss);
	}
	else if(sellingPrice<costPrice)
	{
		profitOrLoss=costPrice-sellingPrice;
		printf("\n\n\t You made a loss of : %f",profitOrLoss);
	}
	else
	{
		printf("\n\n\t No profit no loss");
	}
}
