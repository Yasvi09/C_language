// wap to count the number divisible by 3 between 1 to 30.

#include<stdio.h>
main()
{
	int a=1;
	int count=0;
	
	while(a<=30){
		if(a%3==0){
			printf("\n%d ",a);
			count=count+1;
			
		}
	a++;
	}
	printf("\nThe number divide by 3 is : %d",count);
}

