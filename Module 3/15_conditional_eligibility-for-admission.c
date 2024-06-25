/* 15) Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include<stdio.h>
main()
{
	int maths,physics,chemistry,total_all,total_math_phy;
	
	printf("\n\n\t Enter maths marks :");
	scanf("%d",&maths);
	
	printf("\n\n\t Enter physics marks :");
	scanf("%d",&physics);
	
	printf("\n\n\t Enter chemistry marks :");
	scanf("%d",&chemistry);
	
	total_all=maths+physics+chemistry;
	total_math_phy=maths+physics;
	
	printf("\n\n\t Total marks of Maths, Physics and Chemistry: %d", total_all);
    printf("\n\n\t Total marks of Maths and Physics: %d", total_math_phy);
    
    if(maths>=65 && physics>=55 && chemistry>=50 && (total_all>=190 || total_math_phy>=140))
    {
    	printf("\n\n\t The candidate is eligible...");
	}
	else
	{
		printf("\n\n\t The candidate is not eligible...");
	}
	
	
	
}
