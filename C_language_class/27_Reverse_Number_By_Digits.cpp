//n=123 : sum=6
#include<stdio.h>
main()
{
	int n=1234, rem, sum=0;
	printf("\n\n\n\t n = %d", n);
	
	while(n>0)
	{
		rem=n%10; //n%10 : 1
		sum=sum+rem;
//		printf("%d",rem); //4321
		n=n/10; //1
	}
	printf("\n\n\t Sum of digits : %d",sum);
}
