// 23) WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>
main() {
    
    int a, b;
    
    printf("\n\n\t Enter the first number: ");
    scanf("%d", &a);
    printf("\n\n\t Enter the second number: ");
    scanf("%d", &b);

    printf("\n\n\t Before swapping : a = %d, b = %d", a, b);

    a = a * b; 
    b = a / b;
    a = a / b; 

    printf("\n\n\t After swapping: a = %d, b = %d", a, b);

}

