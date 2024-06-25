// bytes : 1 byte = 8 bits
#include<stdio.h>
main()
{
	int ivar=560;
	float fvar=356.789;
	char cvar='C';
	double dvar=789.0000;
	long int livar=99087678;
	
	printf("\n\n\t Integer : %d",ivar);
	printf("\n\n\t Float : %f",fvar);
	printf("\n\n\t Character : %c",cvar);
	printf("\n\n\t Double  : %lf",dvar);
	printf("\n\n\t Long Integer : %ld",livar);
	printf("\n\n\n\t --------------------------------------");
	
	printf("\n\n\t Size of Integer DT : %d bytes",sizeof(ivar));
	printf("\n\n\t Size of Float DT : %d bytes",sizeof(fvar));
	printf("\n\n\t Size of Character DT : %d bytes",sizeof(cvar));
	printf("\n\n\t Size of Double DT : %d bytes",sizeof(dvar));
	printf("\n\n\t Size of Long Integer DT : %d bytes",sizeof(livar));
	
}
