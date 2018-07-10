// y = sin(x) function.

#include <stdio.h>
#include <math.h>

int main() 
{
	float y;
	int i;

	printf("x     y \n");
	for(i = 0; i <= 180; i += 15) {
		y = sin(i);
		printf("%4d  %4.4f\n", i, y);
	}

	return 0;
}