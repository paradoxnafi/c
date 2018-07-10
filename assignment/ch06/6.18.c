// Not divisol of 2 or 3 and in range of 1 - 100.

#include <stdio.h>

int main()
{
	int i, count = 0;

	for(i = 1; i <= 100; i++) {
		if( (i % 2 != 0) && (i % 3 != 0) ) {
			printf("%3d", i);
			count++;
		}
	}

	printf("\nTotal %d numbers\n",count);

	return 0;
}