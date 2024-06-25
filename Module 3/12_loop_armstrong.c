// 12)Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
#include <math.h>
main () 
{
	printf("\n\t -------Using while loop-------\n");
	
    int num, originalNum, remainder, result = 0, n = 0;

    printf("\n\t Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == originalNum) {
        printf("\n\t %d is an Armstrong number.", originalNum);
    } else {
        printf("\n\t %d is not an Armstrong number.\n	", originalNum);
    }
    
    printf("\n\t -------Using for loop-------\n");
    
    int num1, originalNum1, remainder1, result1 = 0, n1 = 0,temp1;

    printf("\n\t Enter an integer: ");
    scanf("%d", &num1);

    originalNum1 = num1;

    for (temp1 = num1; temp1 != 0; ++n1) {
        temp1 /= 10;
    }

    for (temp1 = num1; temp1 != 0; temp1 /= 10) {
        remainder1 = temp1 % 10;
        result1 += pow(remainder1, n1);
    }

    if (result1 == originalNum1) {
        printf("\n\t %d is an Armstrong number.", originalNum1);
    } else {
        printf("\n\t %d is not an Armstrong number.\n", originalNum1);
    }
}
