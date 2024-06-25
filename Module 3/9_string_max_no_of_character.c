// 9) Write a program in C to find the maximum number of characters in a string

#include <stdio.h>
main() 
{
    char str[100];
    int i, j, maxFrequency, frequency;
    char maxChar;

    printf("\n\t Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        frequency = 1;
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                frequency++;
            }
        }

        if(frequency > maxFrequency) {
            maxFrequency = frequency;
            maxChar = str[i];
        }
    }

    printf("\n\t The character '%c' appears most frequently, %d times.", maxChar, maxFrequency);

}
