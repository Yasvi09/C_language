// 12) WAP to accept 5 students name and store it in array

#include <stdio.h>
main() {
    char names[5][50];
    int i;

    printf("\n\n\t Enter names of 5 students:");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Student %d : ", i + 1);
        scanf("%s",&names[i]); 
		    }

    printf("\n\n\t Names of students:\n\n");
    for (i = 0; i < 5; i++) {
        printf("\t %d. %s\n", i + 1, names[i]);
    }

}

