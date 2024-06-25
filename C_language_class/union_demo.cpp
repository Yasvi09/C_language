/*
structure : A template / a collection of elements with different data type.

student : rollno, name, marks, per


*/
#include<stdio.h>
#include<string.h>
union Student  
{
	int rollno;       
	char name[20];
	float per;
	char grade;
}S; 

main()
{
	
	S.rollno=10;
	strcpy(S.name,"saurav");
	S.per=67;
	S.grade='A';
	
	printf("\n\n\n\t Rollno : %d",S.rollno);
	printf("\n\n\t Name : %s",S.name);
	printf("\n\n\t Per : %f",S.per);
	printf("\n\n\t Grade : %c",S.grade);
}















