//recursion function - function call itself

#include<stdio.h>
void disp(int j){
	if(j<=5){
		printf("%d\n",j);
		disp(++j);
	}
}

int sum(int j){
	if(j<=5){
		return j+sum(j+1);
	}
	else{
		return 0;
	}
}

int fact(int j){
	if(j<=5){
		return j*fact(j+1);
	}
	else{
		return 1;
	}
}

main()
{
	int i=1;
	disp(i);
	printf("\n\t Sum is : %d",sum(i));
	printf("\n\t Factorial is : %d",fact(i));
}
