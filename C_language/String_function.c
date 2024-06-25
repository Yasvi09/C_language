//String functions

#include<stdio.h>
main()
{
	char name[10],name2[10];
	int ans;
	
	printf("\n\n\t Enter name : ");
	//scanf("%s",&name);
	gets(name);
	
	//printf("\n\n\t Your name is : %s",name);
	printf("\n\n\t Your name is : ");
	puts(name);
	
	printf("\n\n\t Length is : %d",strlen(name));
	printf("\n\n\t Your name(reverse) is : %s",strrev(name));
	
	strcpy(name,"test");
	printf("\n\n\t Copy name is : %s",name);
	
	strcat(name,"append");
	printf("\n\n\t After merge name is : %s",name);
	
	printf("\n\n\t Your name(uppercase) is : %s",strupr(name));
	printf("\n\n\t Your name(lowercase) is : %s",strlwr(name));
	
	printf("\n\n\t Enter name2 :");
	gets(name2);
	
	ans=strcmp(name,name2);
	printf("\n\n\t Answer is : %d",ans);
	
	
	
}
