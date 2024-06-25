// pointer

#include<stdio.h>
main()
{
	int a=10,*p;
	
	p=&a;
	
	printf("\n\n\t value of a is : %d",a);
	printf("\n\n\t pointer p is : %d",p);
	printf("\n\n\t pointer p is : %d",*p);
	
	*p=15;
	
	printf("\n\n\t value of a is : %d",a);
	printf("\n\n\t pointer p is : %d",p);
	printf("\n\n\t pointer p is : %d",*p);
}
