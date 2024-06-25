/*
structure : A template / a collection of elements with different data type.

student : rollno, name, marks, per


*/
#include<stdio.h>

struct Student  //structure template named "Student"
{
	int rollno;       //structure member.
	char name[20];
	float per;
	char grade;
}S; //S is the structure var.

main()
{
	//struct Student S;
	printf("\n\n\n\t Input Rollno : ");
	scanf("%d",&S.rollno);
	
	printf("\n\n\n\t Input Name : ");
	scanf("%s",&S.name);
	
	printf("\n\n\n\t Input Per : ");
	scanf("%f",&S.per);
	
	printf("\n\n\n\t Input Grade : ");
	scanf(" %c",&S.grade);
	
	printf("\n\n\n\t Rollno : %d",S.rollno);
	printf("\n\n\t Name : %s",S.name);
	printf("\n\n\t Per : %f",S.per);
	printf("\n\n\t Grade : %c",S.grade);
}















