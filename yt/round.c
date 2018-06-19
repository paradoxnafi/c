#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;

	a = 4.66;
	b = 5.2;

	printf("%.2f \n", floor(a) );
	printf("%.2f \n", floor(b) );

	printf("%.2f \n", ceil(a) );
	printf("%.2f \n", ceil(b) );

	return 0;
}