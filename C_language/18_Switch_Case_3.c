#include<stdio.h>
main()
{
	char c;
	printf("\n\n\t Enter a character to check : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a' : 
		case 'e' :
		case 'i' : 
		case 'o' : 
		case 'u' : 
		case 'A' : 
		case 'E' : 
		case 'I' : 
		case 'O' : 
		case 'U' : printf("\n\n\t Vowel");
				   break;
		default :  printf("\n\n\t Consonant");
				   break;			
	}
}
