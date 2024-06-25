// 32) Accept 2 numbers and find out its sum check it size

#include <stdio.h>
main() 
{
    int num1, num2, sum;

    printf("\n\n\t Enter the first number: ");
    scanf("%d", &num1);
    
    printf("\n\n\t Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n\n\t The sum of %d and %d is : %d", num1, num2, sum);

    printf("\n\n\t The size of the sum in bytes is: %d", sizeof(sum));
}

