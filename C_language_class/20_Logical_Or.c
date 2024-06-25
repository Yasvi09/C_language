#include<stdio.h>
main()
{
	char c;
	
	printf("\n\n\t Enter a character to check : ");
	scanf("%c",&c);
	
	if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O'|| c=='o'|| c=='U'|| c=='u')
		printf("\n\n\t Vowel");
		
	else
		printf("\n\n\t Consonant");
	
}
