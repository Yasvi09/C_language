 /*Task :
 1. Addition
 2. Subtraction
 3. Multiplication
 4. Division
 
 
 +. Addition
 -. subtraction
 *. multiplication
 /. division
 
 */
 #include<stdio.h>
 main()
 {
 	int rollno;
 	char name[15];
 	int s1, s2, s3, s4, s5;
 	float per;
 	printf("\n\n\t Enter a rollno : ");
 	scanf("%d",&rollno);
 	printf("\n\n\t Enter your name : ");
 	scanf("%s",&name);
 	printf("\n\n\t Enter Marks for Subject1 : ");
 	scanf("%d",&s1);
 	printf("\n\n\t Enter Marks for Subject2 : ");
 	scanf("%d",&s2);
 	printf("\n\n\t Enter Marks for Subject3 : ");
 	scanf("%d",&s3);
 	printf("\n\n\t Enter Marks for Subject4 : ");
 	scanf("%d",&s4);
 	printf("\n\n\t Enter Marks for Subject5 : ");
 	scanf("%d",&s5);
 	
 	per=(s1+s2+s3+s4+s5)/5;
 	printf("\n\n\t -------------------------------------");
 	printf("\n\n\t Rollno : %d",rollno);
 	printf("\n\n\t Name : %s",name);
 	printf("\n\n\t -------------------------------------");
 	printf("\n\n\t Marks [1] : %d",s1);
 	printf("\n\n\t Marks [2] : %d",s2);
 	printf("\n\n\t Marks [3] : %d",s3);
 	printf("\n\n\t Marks [4] : %d",s4);
 	printf("\n\n\t Marks [5] : %d",s5);
 	printf("\n\n\t -------------------------------------");
 	printf("\n\n\t Percentage : %f",per);
 	printf("\n\n\t -------------------------------------");
 	
 	if(per>=70)
		printf("\n\n\t Grade : A+");

	else if(per>=60)
 		printf("\n\n\t Grade : A");
 		
 	else if(per>=50)
 		printf("\n\n\t Grade : B");	
 		
 	else if(per>=40)
 		printf("\n\n\t Grade : C");	
 		
 	else
 		printf("\n\n\t Grade : Fail");
 			
 }
