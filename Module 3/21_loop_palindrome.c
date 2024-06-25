// 21) Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
main()
{
	int n,rem,reverse,i,temp;
	
	for(i=0;i<3;i++)
	{
		printf("\n\n\t Enter %d number :",i+1);
		scanf("%d",&n);
		temp=n;
		reverse=0;
		while(temp!=0)
		{
			rem=temp%10;
			reverse=reverse*10+rem;
			temp=temp/10;
		}
		
		if(n==reverse){
			printf("\n\t %d Number is palindrome.",n);
		}
		else{
			printf("\n\t %d Number is not palindrome.",n);
		}
	}
}
