/*  37) WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */

#include<stdio.h>
main()
{
	int days;
	
	printf("\n\n\t Enter week day(1-7) :");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1:
			printf("\n\n\t Monday");
			break;
		case 2:
			printf("\n\n\t Tuesday");
			break;
		case 3:
			printf("\n\n\t Wednesday");
			break;
		case 4:
			printf("\n\n\t Thursday");
			break;
		case 5:
			printf("\n\n\t Friday");
			break;
		case 6:
			printf("\n\n\t Saturday");
			break;
		case 7:
			printf("\n\n\t Sunday");
			break;
		default:
			printf("\n\n\t Enter valid number between 1 to 7...");
			break;
	}
}
