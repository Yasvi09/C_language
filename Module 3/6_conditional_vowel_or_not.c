// 6) Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	char c;
	
	printf("\n\n\t Enter one character :");
	scanf("%c",&c);
	
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("\n\n\t Character is vowel...");
	}
	else
	{
		printf("\n\n\t Character is not vowel it is consonate...");
	}
}
