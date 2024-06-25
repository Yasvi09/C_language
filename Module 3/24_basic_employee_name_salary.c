// 24) Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	char name[5];
	int i,salary[5],totalsalary=0,avg_salary;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter employee %d name :",i+1);
		scanf("%s",&name[i]);
		
		printf("\n\n\t Enter employee %d salary :",i+1);
		scanf("%d",&salary);
	}
	
	for(i=0;i<5;i++)
	{
		totalsalary+=salary[i];
	}
	
	avg_salary=totalsalary/5;
	
	printf("\n\n\t Total Salary is : %d", totalsalary);
    printf("\n\n\t Average Salary is : %d", avg_salary);
	
}
