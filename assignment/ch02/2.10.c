#include<stdio.h>
#define PIE 3.14
void main()
{
	float Area;
	int Rad;
	printf("Enter Radius\n");
	scanf("%d",&Rad);
	Area=PIE*Rad*Rad;
	printf("Area of Circle is:--\n");
	printf("%f",Area);
}