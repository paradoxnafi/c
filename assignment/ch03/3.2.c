#include<stdio.h>

int main()
{
	float x;
	int y,z;
	printf("Enter floating point number : x= ");
	scanf("%f",&x);
	y=x;
	z=y%10;
	printf(" \nThe Right-most digit of the integral part of the number %0.2f is %d",x,z);
}
