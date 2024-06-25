//pointer chain

#include<stdio.h>
main()
{
	int a=20,*p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	
	printf("\n\t a is : %d",a);
	printf("\n\t P is : %d",*p);
	printf("\n\t Q is : %d",**q);
	printf("\n\t R is : %d",***r);
	
	**q=35;
	printf("\n\t a is : %d",a);
	printf("\n\t P is : %d",*p);
	printf("\n\t Q is : %d",**q);
	printf("\n\t R is : %d",***r);
}
