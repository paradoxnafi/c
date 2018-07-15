#include <stdio.h>

int main()
{
	float x, y, sum, dif, prd;

	printf("X = ");
	scanf("%f", &x);
	printf("Y = ");
	scanf("%f", &y);

	sum = x + y;
	dif = x - y;
	prd = x * y;
	float div = x / y;

	printf("\n\nX = %f \t\t\t Y = %f \n", x, y);
	printf("Sum = %f \t\t Difference = %f \nProduct = %f \t\t Divission = %.2f \n", sum, dif, prd, div);

	return 0;
}