/* 4) WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */

#include<stdio.h>
main()
{
	double n1,n2,result;
	char op;
	int resultint;
	printf("\n\n\t Enter operator :");
	scanf("%c",&op);
	
	printf("\n\n\t Enter first number :");
	scanf("%lf",&n1);
	
	printf("\n\n\t Enter second number :");
	scanf("%lf",&n2);
	
	if(op=='+')
	{
		result=n1+n2;
		printf("\n\n\t Addition --> %.2lf + %.2f = %.2lf",n1,n2,result);
	}
	else if(op=='-')
	{
		result=n1-n2;
		printf("\n\n\t Subtraction --> %.2lf - %.2f = %.2lf",n1,n2,result);
	}
	else if(op=='*')
	{
		result=n1*n2;
		printf("\n\n\t Multiplication --> %.2lf * %.2f = %.2lf",n1,n2,result);
	}
	else if(op=='/')
	{
		if(n2!=0)
		{
		result=n1/n2;
		printf("\n\n\t Division --> %.2lf / %.2f = %.2lf",n1,n2,result);
		}
		else
		{
			printf("\n\n\t Number is not divisible by zero");
		}
	}
	else if(op=='%')
	{
		// Modulo operation is generally used with integers
		int num1=(int)n1;
		int num2=(int)n2;
		
		if(num2!=0)
		{
			resultint=num1%num2;
			printf("\n\n\t Modulo --> %d %% %d = %d",num1,num2,resultint);	
		}
		else
		{
			printf("\n\n\t Number is not divisible by zero");
		}
	}
	else
	{
		printf("\n\n\t Please enter correct operator");
	}
}
