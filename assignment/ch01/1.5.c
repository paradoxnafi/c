#include <stdio.h>

#define PIE 3.14
int main()
{
	float r, area;

	printf("Radious: ");
	scanf("%f", &r);

	area = PIE * r * r;

	printf("Area of the circle is :%6.2f \n", area);

	return 0;
}