// 15) Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <ctype.h>
main() 
{
    char str[1000], largest[100], smallest[100];
    char currentWord[100];
    int i = 0, j = 0,k, wordLength = 0;
    int maxLen = 0, minLen = 1000;
    
    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') 
	{
        i++;
    }
    if (i > 0 && str[i - 1] == '\n') {
        str[i - 1] = '\0';
    }

    i = 0;
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            currentWord[j++] = str[i];
        } else {
            if (j != 0) {
                currentWord[j] = '\0';
                wordLength = j;

                if (wordLength > maxLen) {
                    maxLen = wordLength;
                    for (k = 0; k <= j; k++) {
                        largest[k] = currentWord[k];
                    }
                }
                if (wordLength < minLen) {
                    minLen = wordLength;
                    for (k = 0; k <= j; k++) {
                        smallest[k] = currentWord[k];
                    }
                }
                j = 0;
            }
        }
        i++;
    }

    if (j != 0) {
        currentWord[j] = '\0';
        wordLength = j;

        if (wordLength > maxLen) {
            maxLen = wordLength;
            for (k = 0; k <= j; k++) {
                largest[k] = currentWord[k];
            }
        }
        if (wordLength < minLen) {
            minLen = wordLength;
            for (k = 0; k <= j; k++) {
                smallest[k] = currentWord[k];
            }
        }
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

