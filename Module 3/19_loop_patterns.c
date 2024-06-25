/* 19) Patterns:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1 */

#include<stdio.h>
#define BOARD_LENGTH 10

main()
{
	int r,c,s;
	r=1;
	c=1;
	s=1;
	char n;
	n='A';
	int n1=1;
	
	int board[BOARD_LENGTH][BOARD_LENGTH];
    int i,j,counter = 1, l = 0, t = BOARD_LENGTH - 1, halfBoard = BOARD_LENGTH / 2;

	
	printf("\n\n\t ------Pattern 1------\n");
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 2------\n");
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c ",n);
			n++;
		}
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 3------\n");
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",n1);
			n1++;
		}
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 4------\n");
	
	for(r=1;r<=5;r++)
	{
		n='A';
		for(c=1;c<=r;c++)
		{
			printf("%c ",n);
			n++;
		}
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 5------\n");
	
	n='A';
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c ",n);
		}
		printf("\n");
		n++;
	}
	
	printf("\n\n\t ------Pattern 6------\n");
	
	for(r = 1 ; r <= 7 ; r++)
	{
		for(s = 6 ;s >= r ; s--)
		{
			printf("  ");
			
		}
			for(c = 1 ; c <= r ; c++)
			{
				printf(" *  ");
			}
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 7------\n");
	
	for(r=1;r<=6;r++)
	{

		for(c=1;c<=r;c++)
			{
				printf(" * ");
			}
		
		
		printf("\n");
	}
	for(r=1;r<=5;r++)
	{
		for(c=5;c>=r;c--)
			{
				printf(" * ");
			}
		
		printf("\n");
	}
	
	printf("\n\n\t ------Pattern 8------\n");
	
	
    for(i=1; i<=halfBoard; i++)
    {
        j = l;
        while(j<=t){
            board[l][j++] = counter++; 
        }
        
        j = l + 1;
        while(j<=t){
            board[j++][t] = counter++;
        }
        
        j = t - 1;
        while(j>=l){
            board[t][j--] = counter++;
        }
        
        j = t - 1;
        while(j>=l+1){
            board[j--][l] = counter++;
        }
        
        l++;
        t--;
    }

    for(i=0; i<BOARD_LENGTH; i++)
    {
        for(j=0; j<BOARD_LENGTH; j++)
        {
            printf("%-5d", board[i][j]);
        }
        printf("\n");
    }
	
}

