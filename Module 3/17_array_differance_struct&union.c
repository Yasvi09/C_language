// 17) WAP to show difference between Structure and Union

#include<stdio.h>
#include<string.h>

struct EmployeeStructure
{
	int empno;
	char name[20];
	int age;
	char address[50];
}s;

union EmployeeUnion
{
	int empno;
	char name[20];
	int age;
	char address[50];
}u;

main()
{
	s.empno=12;
	strcpy(s.name,"Yasvi");
	s.age=20;
	strcpy(s.address,"CG road");
	
	printf("\n\n\t Empno : %d",s.empno);
	printf("\n\n\t Emp name : %s",s.name);
	printf("\n\n\t Emp age : %d",s.age);
	printf("\n\n\t Emp address : %s",s.address);
	
	u.empno=12;
	strcpy(u.name,"Yasvi");
	u.age=20;
	strcpy(u.address,"CG road");
	
	printf("\n\n\t Empno : %d",u.empno);
	printf("\n\n\t Emp name : %s",u.name);
	printf("\n\n\t Emp age : %d",u.age);
	printf("\n\n\t Emp address : %s",u.address);
}
