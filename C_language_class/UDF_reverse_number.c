// Reverse number using UDF

#include<stdio.h>

int rev(int num){
	int rem,rev=0;
	while(num>0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	return rev;
}
main()
{
	int n;
	printf("\n\t Enter number :");
	scanf("%d",&n);
	
	int rev1 = rev(n);;	
	printf("\n\n\t Reverse number is : %d",rev1);
	
	
}
