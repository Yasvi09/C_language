// 33) C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>
main() 
{
    int num;
    int power1, power2, power3;

    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    power1 = num;          
    power2 = num * num;    
    power3 = num * num * num; 

    printf("\n\n\t The first three powers of %d are:\n", num);
    printf("\t %d^1 = %d\n", num, power1);
    printf("\t %d^2 = %d\n", num, power2);
    printf("\t %d^3 = %d\n", num, power3);

}

