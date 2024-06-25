// 10) WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    return originalNum == reversedNum;
}

main() 
{
    int num;

    printf("\n\t Enter a number to check if it is a palindrome: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("\n\t %d is a palindrome.", num);
    } else {
        printf("\n\t %d is not a palindrome.", num);
    }

}

