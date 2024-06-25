// 25) Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	float expense[5],avg_expense,totalexpense=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter expense %d :",i+1);
		scanf("%f",&expense[i]);
	}
	
	for(i=0;i<5;i++)
	{
		totalexpense+=expense[i];
	}
	
	avg_expense=totalexpense/5;
	
	printf("\n\n\t Total Expense is : %f",totalexpense);
    printf("\n\n\t Average Expense is : %f",avg_expense);

	
	
}

