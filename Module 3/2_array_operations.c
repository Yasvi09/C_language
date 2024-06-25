/* 2)  WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) */

#include <stdio.h>
main() 
{
    int choice;
    float num1, num2, result;

    printf("\n\t Menu:\n");
    printf("\n\t 1. Addition\n");
    printf("\n\t 2. Subtraction\n");
    printf("\n\t 3. Multiplication\n");
    printf("\n\t 4. Division\n");
    printf("\n\t Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("\n\t Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\n\t Result: %.2f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n\t Result: %.2f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n\t Result: %.2f", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n\t Result: %.2f", result);
            } else {
                printf("\n\t Error! Division by zero.");
            }
            break;
        default:
            printf("\n\t Invalid choice!");
    }
}

