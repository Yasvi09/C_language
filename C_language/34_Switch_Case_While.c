#include<stdio.h>
main()
{
	int n1, n2, choice;
	
	while(1) //always true
	{
	
		printf("\n\n\t Enter number 1 : ");
		scanf("%d",&n1);
		printf("\n\n\t Enter number 2 : ");
		scanf("%d",&n2);
	
		printf("\n\n\t ----------- Arithmatic Operations --------------");
		printf("\n\n\t Press 1 for Addition");
		printf("\n\n\t Press 2 for Subtraction");
		printf("\n\n\t Press 3 for Multiplication");
		printf("\n\n\t Press 4 for Division");
		printf("\n\n\t Press 5 for Exit");
		printf("\n\n\t ------------------------------------------------");
	
		printf("\n\n\t Select the operation : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1 : printf("\n\n\t Addition = %d",n1+n2);
				 	break;
		
			case 2 : printf("\n\n\t Subtraction = %d",n1-n2);
				 	break;
		
			case 3 : printf("\n\n\t Multiplication = %d",n1*n2);
				 	break;
		
			case 4 : printf("\n\n\t Division = %d",n1/n2);
				 	break;
				 	
			case 5 : exit(0);
					break;
		
			default : printf("\n\n\t Invalid choice!! Try again...");
		}
}
	
}
