// A table. starting from 0.0 and ending in 9.9

#include <stdio.h>

int main()
{
	int i, j;
	float n;
	n = 0.0;

	for(i = 1; i <= 10; i++) {
		for(j = 1; j <= 10; j++) {
			printf("%2.1f ", n);
			n+= 0.1;
		}
		printf("\n");
	}

	return 0;
}