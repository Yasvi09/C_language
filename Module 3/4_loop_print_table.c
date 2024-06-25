// 4) WAP to print table up to given numbers

#include <stdio.h>
main() 
{
    int num,i,j;

    printf("\n\n\t Enter a number to print the multiplication table up to: ");
    scanf("%d", &num);

    printf("\n\n\t Multiplication Table up to %d:\n", num);
    for (i = 1; i <= num; i++) {
        printf("Table of %d:\n\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

}

