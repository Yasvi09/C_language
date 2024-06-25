// 4) WAP to find factorial using recursion

#include<stdio.h>

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
	printf("\n\t Factorial is : %d",fact(i));
}
