#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, y1, y2, D;
	D = 0;

	printf ("Input value of x1 and y1: ");
	scanf ("%f %f", &x1, &y1);
	printf ("Input value of x2 and y2: ");
	scanf ("%f %f", &x2, &y2);

	D = sqrt (((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));

	printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f \n", x1, y1, x2, y2, D);

	return 0;
}