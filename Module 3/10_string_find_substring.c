// 10) Write a program in C to extract a substring from a given string

#include <stdio.h>

main() 
{
    char str[100], substr[100];
    int start, length;
    int i;

    printf("\n\n\t Enter the main string: ");
    gets(str);

    printf("\n\n\t Enter the starting index of the substring: ");
    scanf("%d", &start);
    printf("\n\n\t Enter the length of the substring: ");
    scanf("%d", &length);

    for (i = 0; i < length; i++) {
        substr[i] = str[start + i];
    }

    printf("\n\n\t Extracted substring: %s", substr);

}

