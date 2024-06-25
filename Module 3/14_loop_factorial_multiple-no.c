// 14) Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int number[5];
	int i,j;
	int fact;
	
	printf("\n\n\t-----Enter 5 numbers-----");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Number %d : ", i + 1);
        scanf("%d", &number[i]);
    }
    
    for(i=0;i<5;i++)
    {
    	fact=1;
    	for(j=1;j<=number[i];j++)
    	{
    		fact=fact*j;
		}
		printf("\n\n\t Factorial of %d : %d ", number[i], fact);
	}
}
