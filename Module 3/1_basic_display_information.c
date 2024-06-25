/* 1)  Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address
*/

#include<stdio.h>
main()
{
	char name[20]="Yasvi";
	long DOB="11/09/2005";
	int age=18;
  	char add[50]="Ahmadabad";
  	
  	printf("\n\n\tThe name is --> %s ",name);
  	printf("\n\n\tBirthdate is --> %l",DOB);
  	printf("\n\n\tAge is --> %d",age);
  	printf("\n\n\tAddress is --> %s",add);
}








