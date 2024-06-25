#include<stdio.h>
#define PI 3.14

// 1) TNRN - take nothing return nothing

void add(){
	int a,b;
	printf("\n\t Enter a :");
	scanf("%d",&a);
	printf("\n\t Enter b :");
	scanf("%d",&b);
	printf("\n\t Addition is : %d\n",a+b);
}

//2) TNRS -  take nothing return something

int cube(){
	int a;
	printf("\n\t Enter a:");
	scanf("%d",&a);
	return a*a*a;
}

//3) TSRN 

void area(float r){
	printf("\n\t Area of the circle is : %.2f\n",PI*r*r);
}

//4) TSRS

float mult(int,float);
main(){
	int ans;
	float p;
	
	printf("\n\t -----Main function executed-----");
	add();
	
	//ans=cube();
	printf("\n\t Cube is : %d\n",cube());
	
	printf("\n\t Enter radius :");
	scanf("%f",&p);
	area(p);
	
	printf("\n\t Multiplication is : %.2f\n",mult(20,1.5));
	printf("\n\t -----End Main function-----");
}

float mult(int a,float b){
	float c=(float)a*b;
	return c;
}
