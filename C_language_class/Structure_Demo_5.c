#include<stdio.h>
struct Employee  //outer structure
{
	int eid;
	char ename[30];
	int salary;
	
	struct Dept   //inner structure
	{
		int did;
		char dname[20];
		char branch[20];
	}D;
		
}E;

main()
{
		E.eid=111;
		strcpy(E.ename,"vikas");
		E.salary=45000;
		
		E.D.did=101;
		strcpy(E.D.dname,"Purchase");
		strcpy(E.D.branch,"Ahmedabad");
		
		printf("\n\n\n\t Emp ID : %d",E.eid);
		printf("\n\n\t Emp Name : %s",E.ename);
		printf("\n\n\t Salary : %d",E.salary);
		
		printf("\n\n\t Dept Id : %d",E.D.did);
		printf("\n\n\t Dept Name : %s",E.D.dname);
		printf("\n\n\t Branch : %s",E.D.branch);
}


