// 27)  1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
main()
{
	int i,n;
	double sum,term;
	
	printf("\n\t Enter number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ 
		term=(double)i/(i+1);
		if(i%2==0){
			sum-=term;
			printf(" -%d/%d",i,(i+1));
		}
		else{
			if(i==1){
				printf(" %d/%d",i,(i+1));
			}
			else{
				sum+=term;
				printf(" +%d/%d",i,(i+1));
			}
		}
	}
	printf("\n\t Answer is : %lf",sum);
}
