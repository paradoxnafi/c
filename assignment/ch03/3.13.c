#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter Three Numbers: \n");
	scanf("%d %d %d", &x, &y, &z);
	(x>y && x>z ) ? printf("Largest number is %5d \n", x):
		(y>x && y>z) ? printf("Largest number is %5d \n", y): printf("Largest number is %5d \n", z);

	return 0;
}