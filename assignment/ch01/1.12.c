#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
	float x1 = 4, x2 = 0, y1 = 5, y2 = 0, r, s, area;

	r = sqrt (((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));
	s = 2 * PI * r;
	area = PI * r * r;

	printf("Circumference of the circle is %f and area of the circle is %f\n", s, area);
	return 0;
}