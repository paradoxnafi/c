#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
	float x1, x2, y1, y2, r, area;
	x1 = 2, x2 = 5, y1 = 2, y2 = 6;

	r = (sqrt (((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)))) / 2;

	area = PI * r * r;

	printf("Area of the circle is %f \n", area);

	return 0;
}