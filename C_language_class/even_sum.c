// wap to make the sum of even numbers between 1 to 20. 

#include<stdio.h>
main()
{
	int a=2;
	int sum=0;
	
	while(a<=20){
		sum=sum+a;
		a=a+2;
	}
	printf("sum is : %d",sum);
}
