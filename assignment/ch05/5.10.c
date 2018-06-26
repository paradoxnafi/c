#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x1, x2, answer;

	printf("Enter value of a: ");
	scanf(" %f", &a);
	printf("Enter value of b: ");
	scanf(" %f", &b);
	printf("Enter value of c: ");
	scanf(" %f", &c);
	printf("\n");

	x1 = -b + sqrt( ( (b*b) - (4*a*c) ) / (2*a) );
	x2 = -b - sqrt( ( (b*b) - (4*a*c) ) / (2*a) );

	( (x1 > 0) || (x1 <= 0) ) ? printf("X1 = %.2f \n", x1) : printf("X1 is not a root of x\n");
	( (x2 > 0) || (x2 <= 0) ) ? printf("X2 = %.2f \n", x1) : printf("X2 is not a root of x\n");

	return 0;
}