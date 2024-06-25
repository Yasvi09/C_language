// 3)  WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char* str, int start, int end) 
{
    if (start >= end) 
	{
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    reverseString(str, start + 1, end - 1);
}

main() 
{
	
	char str[40];
	int length;
	
	printf("\n\t Enter String :");
	gets(str);
    length = strlen(str);

    reverseString(str, 0, length - 1);
    
    printf("\n\t The reverse of the string is: %s", str);
}


