#include<stdio.h>
main()
{
	int ivar;
	float fvar;
	char cvar;
	char svar[5];
	
	
	printf("\n\n\t Input a character value : ");
	scanf("%c",&cvar); 
	printf("\n\n\t Input an integer value : ");
	scanf("%d",&ivar);
	
	printf("\n\n\t Input a floating point value : ");
	scanf("%f",&fvar);
	
	
	
	printf("\n\n\t Input a string value : ");
	scanf("%s",&svar);
	
	printf("\n\n\t Integer : %d",ivar);
	printf("\n\n\t Float : %f",fvar);
	printf("\n\n\t Character : %c",cvar);
	printf("\n\n\t String : %s",svar);
	
}
