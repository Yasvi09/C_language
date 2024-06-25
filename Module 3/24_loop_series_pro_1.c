// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	sum+=i;
	 	if (i != n)
            printf("%d + ",i);
    }

    printf("\n\n\t Sum: %d", sum);
	 
}
