/* 8) WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
and age
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address and age */

#include<stdio.h>

struct Employee
{
	int empno;
	char name[20];
	int age;
	char address[50];
	
}e;
main()
{
	char str[50],rev_str[50];
	int len,i,j;
	int isPalindrome = 0;
	
	printf("\n\t Enter String :");
	gets(str);
	
	printf("\n\n\t String is :");
	puts(str);
	
	len=strlen(str);
	
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		rev_str[j]=str[i];
	}
	
	printf("\n\n\t Reverse string is :");
	puts(rev_str);
	
	for(i=0;i<len;i++){
		if(str[i]!=rev_str[i]){
			isPalindrome=1;
			break;
		}
	}
	
	if(isPalindrome){
		printf("\n\t String is palindrome...");
	}
	else{
		printf("\n\t String is not palindrome...");
	}

	printf("\n\n\n\t--------Structure--------");
	
	for(i=0;i<5;i++){
		printf("\n\n\n\t -----Enter details for employee %d -----",i+1);
		printf("\n\t Enter employee id number :");
		scanf("%d",&e.empno);
		printf("\n\t Enter employee name :");
		scanf("%s",&e.name);
		printf("\n\t Enter employee age :");
		scanf("%d",&e.age);
		printf("\n\t Enter employee address :");
		scanf("%s",&e.address);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Details of employee %d :",i+1);
		printf("\n\n\t Employee id number : %d",e.empno);
		printf("\n\n\t Employee name : %s",&e.name);
		printf("\n\n\t Employee age : %d",&e.age);
		printf("\n\n\t Employee adress : %s",&e.address);
	}
	
}
