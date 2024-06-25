/*
Structure within array.
*/
#include<stdio.h>
struct Student  //structure template named "Student"
{
	int rollno;       //structure member.
	char name[20];
	int sub[5];
	float per;
	char grade;
}S; //S is the structure var.

main()
{
	//struct Student S;
	int i, total=0;
	printf("\n\n\n\t Input Rollno : ");
	scanf("%d",&S.rollno);
	printf("\n\n\n\t Input Name : ");
	scanf("%s",&S.name);
	for(i=0;i<5;i++)
	{
		printf("\n\n\n\t Input marks for Sub[%d] : ",i+1);
		scanf("%d",&S.sub[i]);
		
		total=total+S.sub[i];
	}
	S.per=total/5;
	
	printf("\n\n\n\t Rollno : %d",S.rollno);
	printf("\n\n\t Name : %s",S.name);
	printf("\n\n\t Per : %f",S.per);
	//printf("\n\n\t Grade : %c",S.grade);
}















